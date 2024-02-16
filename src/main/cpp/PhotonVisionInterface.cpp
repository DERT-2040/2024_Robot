#include "include/PhotonVisionInterface.h"

void PhotonVisionInterface::PreStep() {
    // Getting data from the PoseEstimator
    auto globalPose = photonEstimator.Update();
    if (globalPose.has_value()) {
        robot2dPose = globalPose->estimatedPose.ToPose2d();
    }
    auto latestPipelineResult = camera.get()->GetLatestResult();
    const auto& photonTrackedTargets = latestPipelineResult.GetTargets();
    // This will average all of the individual PoseAmbiguitys that we get from the tags, so we can use the average in the Kalman Filter.
    averageRobotPoseAmbiguity = 1;
    if (latestPipelineResult.HasTargets()) {
        double tmp_totalRobotPoseAmbiguity = 0;
        for (const auto& target : photonTrackedTargets) {
            int targetId = target.GetFiducialId();
            tmp_totalRobotPoseAmbiguity += static_cast<double>(target.GetPoseAmbiguity());
            if (targetId == 7) {
                Code_Gen_Model_U.AT_Tag_7_Yaw = target.GetYaw();
            }
            if (targetId == 4) {
                Code_Gen_Model_U.AT_Tag_4_Yaw = target.GetYaw();
            }
            if (targetId == 6) {
                Code_Gen_Model_U.AT_Tag_6_Yaw = target.GetYaw();
            }
            if (targetId == 5) {
                Code_Gen_Model_U.AT_Tag_5_Yaw = target.GetYaw();
            }
        }
        averageRobotPoseAmbiguity = tmp_totalRobotPoseAmbiguity / photonTrackedTargets.size();
    }
    // Inputs Values into Simulink Model
    Code_Gen_Model_U.Photon_Est_Pose_X = robot2dPose.X().value();
    Code_Gen_Model_U.Photon_Est_Pose_Y = robot2dPose.Y().value();
    Code_Gen_Model_U.Photon_Est_Pose_Ambiguity = averageRobotPoseAmbiguity;
}

void PhotonVisionInterface::PostStep() {

}

// Put any datapoints that you want to be on SD here
void PhotonVisionInterface::SmartDashboardCallback() {
    frc::SmartDashboard::PutNumber("RobotX", static_cast<double>(robot2dPose.X()));
    frc::SmartDashboard::PutNumber("RobotY", static_cast<double>(robot2dPose.Y()));
    frc::SmartDashboard::PutNumber("RobotGlobalPoseAmbiguity", averageRobotPoseAmbiguity);
}

frc::Pose2d PhotonVisionInterface::GetEstimatedGlobalPose() {
    return robot2dPose;
}

double PhotonVisionInterface::GetGlobalPoseAmbiguity() {
    return averageRobotPoseAmbiguity;
}

PhotonVisionInterface::PhotonVisionInterface() {
    photonEstimator.SetMultiTagFallbackStrategy(photon::PoseStrategy::LOWEST_AMBIGUITY);
}
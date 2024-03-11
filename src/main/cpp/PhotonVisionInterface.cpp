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
    AT_Tag_4_Found = false;
    AT_Tag_5_Found = false;
    AT_Tag_6_Found = false;
    AT_Tag_7_Found = false;
    if (latestPipelineResult.HasTargets()) {
        double tmp_totalRobotPoseAmbiguity = 0;
        for (const auto& target : photonTrackedTargets) {
            int targetId = target.GetFiducialId();
            tmp_totalRobotPoseAmbiguity += static_cast<double>(target.GetPoseAmbiguity());
            if (targetId == 7) {
                AT_Tag_7_Yaw = target.GetYaw();
                AT_Tag_7_Found = true;
            }
            if (targetId == 4) {
                AT_Tag_4_Yaw = target.GetYaw();
                AT_Tag_4_Found = true;
            }
            if (targetId == 6) {
                AT_Tag_6_Yaw = target.GetYaw();
                AT_Tag_6_Found = true;
            }
            if (targetId == 5) {
                AT_Tag_5_Yaw = target.GetYaw();
                AT_Tag_5_Found = true;
            }
            if (targetId == 11) {
                AT_Tag_11_Yaw = target.GetYaw();
                AT_Tag_11_Found = true;
            }
            if (targetId == 12) {
                AT_Tag_12_Yaw = target.GetYaw();
                AT_Tag_12_Found = true;
            }
            if (targetId == 13) {
                AT_Tag_13_Yaw = target.GetYaw();
                AT_Tag_13_Found = true;
            }
            if (targetId == 14) {
                AT_Tag_14_Yaw = target.GetYaw();
                AT_Tag_14_Found = true;
            }
            if (targetId == 15) {
                AT_Tag_15_Yaw = target.GetYaw();
                AT_Tag_15_Found = true;
            }
            if (targetId == 16) {
                AT_Tag_16_Yaw = target.GetYaw();
                AT_Tag_16_Found = true;
            }
        }
        averageRobotPoseAmbiguity = tmp_totalRobotPoseAmbiguity / photonTrackedTargets.size();
    }
    // Inputs Values into Simulink Model
    Code_Gen_Model_U.Photon_Est_Pose_X = robot2dPose.X().value();
    Code_Gen_Model_U.Photon_Est_Pose_Y = robot2dPose.Y().value();
    Code_Gen_Model_U.AT_Tag_7_Yaw = AT_Tag_7_Yaw;
    Code_Gen_Model_U.AT_Tag_6_Yaw = AT_Tag_6_Yaw;
    Code_Gen_Model_U.AT_Tag_5_Yaw = AT_Tag_5_Yaw;
    Code_Gen_Model_U.AT_Tag_4_Yaw = AT_Tag_4_Yaw;
    Code_Gen_Model_U.AT_Tag_4_Found = AT_Tag_4_Found;
    Code_Gen_Model_U.AT_Tag_5_Found = AT_Tag_5_Found;
    Code_Gen_Model_U.AT_Tag_6_Found = AT_Tag_6_Found;
    Code_Gen_Model_U.AT_Tag_7_Found = AT_Tag_7_Found;
    Code_Gen_Model_U.AT_Tag_11_Yaw = AT_Tag_11_Yaw;
    Code_Gen_Model_U.AT_Tag_12_Yaw = AT_Tag_12_Yaw;
    Code_Gen_Model_U.AT_Tag_13_Yaw = AT_Tag_13_Yaw;
    Code_Gen_Model_U.AT_Tag_14_Yaw = AT_Tag_14_Yaw;
    Code_Gen_Model_U.AT_Tag_15_Yaw = AT_Tag_15_Yaw;
    Code_Gen_Model_U.AT_Tag_16_Yaw = AT_Tag_16_Yaw;
    Code_Gen_Model_U.AT_Tag_11_Found = AT_Tag_11_Found;
    Code_Gen_Model_U.AT_Tag_12_Found = AT_Tag_12_Found;
    Code_Gen_Model_U.AT_Tag_13_Found = AT_Tag_13_Found;
    Code_Gen_Model_U.AT_Tag_14_Found = AT_Tag_14_Found;
    Code_Gen_Model_U.AT_Tag_15_Found = AT_Tag_15_Found;
    Code_Gen_Model_U.AT_Tag_16_Found = AT_Tag_16_Found;
    
    Code_Gen_Model_U.Photon_Est_Pose_Ambiguity = averageRobotPoseAmbiguity;
}

void PhotonVisionInterface::PostStep() {

}

// Put any datapoints that you want to be on SD here
void PhotonVisionInterface::SmartDashboardCallback() {
    frc::SmartDashboard::PutNumber("RobotX", static_cast<double>(robot2dPose.X()));
    frc::SmartDashboard::PutNumber("RobotY", static_cast<double>(robot2dPose.Y()));
    frc::SmartDashboard::PutNumber("RobotGlobalPoseAmbiguity", averageRobotPoseAmbiguity);
    frc::SmartDashboard::PutNumber("AT_Tag_4_Yaw", AT_Tag_4_Yaw);
    frc::SmartDashboard::PutNumber("AT_Tag_5_Yaw", AT_Tag_5_Yaw);
    frc::SmartDashboard::PutNumber("AT_Tag_6_Yaw", AT_Tag_6_Yaw);
    frc::SmartDashboard::PutNumber("AT_Tag_7_Yaw", AT_Tag_7_Yaw);
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
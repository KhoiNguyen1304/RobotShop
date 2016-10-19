#include <vector>
#include "RobotPart.h"
#include "RobotModel.h"
#include "TrackingParts.h"
#include "Torso.h"
#include "Head.h"
#include "Arm.h"
#include "Locomotor.h"
#include "Battery.h"




 void displayMenu();
 void list_robotparts(std::vector<Torso> torso, std::vector<Head> head, std::vector<Arm> arm, std::vector<Locomotor> loco, std::vector<Battery> batt);
 void list_models(std::vector<RobotModel> rbmodel, std::vector<TrackingParts> tp, std::vector<Torso> torso, std::vector<Head> head, std::vector<Arm> arm, std::vector<Locomotor> loco, std::vector<Battery> batt);
#include "Torso.h"
#include "Head.h"
#include "Arm.h"
#include "Locomotor.h"
#include "Battery.h"
#include "view.h"
#include "RobotModel.h"
#include "TrackingParts.h"
#include "RobotOrder.h"
#include "Customer.h"
#include <vector>


Torso createTorso();
Head createHead();
Arm createArm();
Locomotor createLocomotor();
Battery createBattery();

RobotModel createModel();
TrackingParts TrackParts();
Customer createCus();
RobotOrder createOrder(std::vector<RobotModel> rbmodel);

void displayModel_createOp();
void displayCreateMenu();
void displayParts_createOp();
void displayReportMenu();

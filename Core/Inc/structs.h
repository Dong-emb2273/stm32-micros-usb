#ifndef STRUCTS_H
#define STRUCTS_H




#include <stdint.h>
#include "main.h"
#include "can.h"
#include "joint_acc.h"

typedef struct{
    } GPIOStruct;

typedef struct{
    }COMStruct;


/* Global Structs */
extern CANTxMessage can_tx;
extern CANRxMessage can_rx;

extern JointRobot_t robot_joints[NUM_JOINTS];
extern JointRobot_t* joint_map[MAX_CAN_ID];
		
#endif
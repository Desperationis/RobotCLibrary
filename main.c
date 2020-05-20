#pragma config(Sensor, dgtl1,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightEncoder,   sensorQuadEncoder)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port5,           rightMotor,    tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "CLibrary.c"

// Notes:
// You can download files from cortex using Robot > File Management
// You can check battery level by using nImmediateBatterLevel; Found in Battery > Variables

task main() {
	ResetEncoders();
	startTask(Slew);

	SetLeftMotor(leftMotor);
	SetRightMotor(rightMotor);
	SetLeftEncoder(leftEncoder);
	SetRightEncoder(rightEncoder);
	SetAverageDelay(20);
	SetControllerSpeed(1);
	SetSlewStep(10);

	//PID(500, 1, 1);
	startTask(GamerControl);
	while(true) {
		// Keep program alive.
		delay(GetDelay());
	}
}

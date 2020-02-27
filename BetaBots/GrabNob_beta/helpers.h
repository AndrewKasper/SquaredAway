//The circomfrince of the wheel is 7.85
// 1 rotation is 7.85 inches
// 1 rotation is 360 degrees

void forwardMove(int distance, int speed){
	moveMotorTarget(LeftDrive, distance, speed);
	moveMotorTarget(RightDrive, distance, speed);
	//Holds program flow until the motor on port 1 comes to a complete stop.

  //Keep looping until the motor stops moving
	sleep(100);
	while(getMotorZeroVelocity(LeftDrive) == 0  && getMotorZeroVelocity(RightDrive) == 0)
	{
		if(getMotorZeroVelocity(LeftDrive) == 1) {stopMotor(RightDrive);}
		if(getMotorZeroVelocity(RightDrive) == 1) {stopMotor(LeftDrive);}
	}
	stopMotor(RightDrive);
	stopMotor(LeftDrive);
}

void backwardMove(int distance, int speed){
	moveMotorTarget(LeftDrive, -distance, -speed);
	moveMotorTarget(RightDrive, -distance, -speed);

	  //Keep looping until the motor stops moving
	sleep(100);
	while(getMotorZeroVelocity(LeftDrive) == 0  && getMotorZeroVelocity(RightDrive) == 0)
	{
		if(getMotorZeroVelocity(LeftDrive) == 1) {stopMotor(RightDrive);}
		if(getMotorZeroVelocity(RightDrive) == 1) {stopMotor(LeftDrive);}
	}
	stopMotor(RightDrive);
	stopMotor(LeftDrive);


	}


void turnRightDist(float deg, int speed){
	resetGyro(Gyro);
	int gyroValue = getGyroDegreesFloat(Gyro);
	int gyroValueNew = 0;
	if(deg > 0 && deg <=45 ){ gyroValueNew= (gyroValue + deg) * 0.745;}
	if(deg > 45 && deg <=90 ){ gyroValueNew= (gyroValue + deg) * 0.79;}
	if(deg > 90 && deg <=135 ){ gyroValueNew= (gyroValue + deg) * 0.835;}
	if(deg > 135 && deg <=180 ){ gyroValueNew= (gyroValue + deg) * 0.88;}
	if(deg > 180){ gyroValueNew= (gyroValue + deg) * 0.88;}


	motor[LeftDrive] = speed;
	motor[RightDrive] = -speed;
	waitUntil(abs(getGyroDegreesFloat(Gyro)) >= gyroValueNew);

	  //Keep looping until the motor stops moving

	stopMotor(LeftDrive);
	stopMotor(RightDrive);
	resetGyro(Gyro);
}


void turnLeftDist(float deg, int speed){

	resetGyro(Gyro);
	int gyroValue = getGyroDegreesFloat(Gyro);
	int gyroValueNew = 0;
	if(deg > 0 && deg <=45 ){ gyroValueNew= (gyroValue + deg) * 0.745;}
	if(deg > 45 && deg <=90 ){ gyroValueNew= (gyroValue + deg) * 0.79;}
	if(deg > 90 && deg <=135 ){ gyroValueNew= (gyroValue + deg) * 0.835;}
	if(deg > 135 && deg <=180 ){ gyroValueNew= (gyroValue + deg) * 0.88;}
	if(deg > 180){ gyroValueNew= (gyroValue + deg) * 0.88;}


	motor[LeftDrive] = -speed;
	motor[RightDrive] = speed;
	waitUntil(abs(getGyroDegreesFloat(Gyro)) >= gyroValueNew);
	  //Keep looping until the motor stops moving
	stopMotor(LeftDrive);
	stopMotor(RightDrive);
	resetGyro(Gyro);

}

void waitForTouch(){
	setTouchLEDColor(LED, colorRed);
	waitUntil(getTouchLEDValue(LED) == 1);
	setTouchLEDColor(LED, colorGreen);
}

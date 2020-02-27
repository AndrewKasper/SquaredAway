void firstGreen() {
	motor[Convayor] = 100;
	forwardMove(28,100);   //originally 12
	turnRightDist(85,50);
	moveMotorTarget(FrontClaw, -485, -100);
	setMotorBrakeMode(FrontClaw, motorCoast);
	forwardMove(290,30);  // orginally 315
	turnLeftDist(130,50);  //orginally 135
	forwardMove(220,30);   //originally  220
	sleep(200);
	moveMotorTarget(FrontClaw, 475, 50);
	forwardMove(210,20);   //originally 255
	turnRightDist(30,30);
	forwardMove(180,30);   //originally 210
	sleep(200);
	//turnLeftDist(10,10);
	moveMotorTarget(FrontClaw,-300,-50);
	waitUntilMotorMoveComplete(FrontClaw);
	forwardMove(80,30);   //originally 210
	backwardMove(140,50);
	moveMotorTarget(FrontClaw,300,50);
	stopMotor(Convayor);

}

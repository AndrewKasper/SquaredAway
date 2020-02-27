void thirdGreen() {
	motor[Convayor] = 100;
	forwardMove(28,100);   //originally 12
	turnLeftDist(85,50);
	moveMotorTarget(FrontClaw, -485, -100);
	setMotorBrakeMode(FrontClaw, motorCoast);
	forwardMove(290,20);  // orginally 315
	turnRightDist(130,50);  //orginally 135
	forwardMove(220,20);   //originally  220
	sleep(200);
	moveMotorTarget(FrontClaw, 475, 50);
	forwardMove(200,20);   //originally 255
	turnLeftDist(30,30);
	forwardMove(180,30);   //originally 210
	sleep(200);
	//turnLeftDist(10,10);
	moveMotorTarget(FrontClaw,-300,-50);
	waitUntilMotorMoveComplete(FrontClaw);
	forwardMove(60,30);   //originally 210
	backwardMove(180,50);
}

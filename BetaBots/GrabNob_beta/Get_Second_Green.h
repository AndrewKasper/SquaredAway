void secondGreen() {
	motor[Convayor] = 100;
	forwardMove(28,100);   //originally 12
	turnRightDist(85,50);
	moveMotorTarget(FrontClaw, -485, -100);
	setMotorBrakeMode(FrontClaw, motorCoast);
	forwardMove(290,30);  // orginally 315
	turnLeftDist(45,50);  //orginally 135
	forwardMove(240,20);   //originally  220
	sleep(200);
	moveMotorTarget(FrontClaw, 475, 50);
	forwardMove(100,20);   //originally 255
	backwardMove(250,30);
  setMotorBrakeMode(FrontClaw, motorHold);
  moveMotorTarget(FrontClaw, 90, 100);
	turnRightDist(94,50);  //orginally 135
//	forwardMove(230,20);   //originally 255
	forwardMove(70,20);   //Work on this distance  --- start
  sleep(100);
//	turnLeftDist(20,50);
  moveMotorTarget(FrontClaw,-125,-30);
  //sleep(1000);
  sleep(400);
	forwardMove(60,50);
  moveMotorTarget(FrontClaw,25,30);
	backwardMove(200,50);  //working on this  -- currently 60

	stopMotor(Convayor);
}

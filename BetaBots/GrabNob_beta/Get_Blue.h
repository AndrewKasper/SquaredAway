void getBlue(){
	//Get Blue
	moveMotorTarget(FrontClaw,-150,-50);
	waitUntilMotorMoveComplete(FrontClaw);
	turnRightDist(88,50);
	forwardMove(320,50);     //originally 355
	turnLeftDist(93,50);
	forwardMove(140,30);     //orginally
	moveMotorTarget(FrontClaw, 440, 100);
	forwardMove(30,30);     //orginally
	waitUntilMotorMoveComplete(FrontClaw);
	//Place Blue
	turnRightDist(45,50);
	backwardMove(300,50);
	turnLeftDist(130,50);
	forwardMove(800,100);
	//forwardMove(300,100);
	moveMotorTarget(FrontClaw,-180,-100);
	turnLeftDist(25,70);
	moveMotorTarget(FrontClaw,-120,-100);
	//sleep(500);
	moveMotorTarget(FrontClaw,-300,-100);
//	waitUntilMotorMoveComplete(FrontClaw);
	forwardMove(700,100);
	backwardMove(200,100);  //working on this  -- currently 90

	stopMotor(Convayor);

}

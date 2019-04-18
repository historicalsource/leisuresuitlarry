[
[	gamedefs.h
[
[	LEISURE SUIT LARRY IN THE LAND OF THE LOUNGE LIZARDS GAME DEFINITIONS
[
[	Wednesday, June 10, 1987 at 9:00 p.m.
[



%include	"views.h"
%tokens	"..\\words.tok"
%include	"sysdefs.h"
%include	"flag_var.h"



[************   CONSTANTS   ************]
#define	CYCLES_BEFORE_DEATH		44
#define	TEXT_COLOR			15
#define	BG_COLOR				0
#define	NORMAL_STEP_SIZE		1
#define	FALLING_STEP_SIZE		3
#define	EGO_STUNNED_TIME		5
#define	NOWHERE				0
#define	DOOR_CYCLE_TIME		3
#define	SMILE_SECONDS			5
#define	FROWN_SECONDS			7
#define	INVENTORY				255



[************     FLAGS     ************]
[Only the interpreter can use	  0-29	(globals)
[		Any room can use	220-239	(lf's)
[Only dynamic logics can use	240-255	(df's)

%flag	forceAtest			30
%flag	testing				31
%flag	debugging				32
%flag	xyOn					33
%flag	keepCycling			34
%flag	noCycling				35
%flag	ignoreSpecial			36
%flag	ignoreWater			37
%flag	demo					38
%flag	doit			 		39
%flag	done					40
%flag	egoArrived			41
%flag	clockOn				42
%flag	updateClock			43
%flag	aSecondPassed			44
%flag	myHaveMatch			45
%flag	outOfMemory			46
%flag	survivableFall			47
%flag	handsOff				48
%flag	preventNewRoom			49
%flag	certainDeath			50
%flag	egoDeathDone			51
%flag	musicDone				52
%flag	soundDone				53
%flag	notCloseEnough			54
%flag	alreadyGotIt			55
%flag	TVOn					56
%flag	knowsPassword			57
%flag	smellsLikeDogPiss		58
%flag	toiletPaperOnShoe		59
%flag	lookedAtCabbie			60
%flag	nearTaxi				61
%flag	wearingRubber			62
%flag	scoredHooker			63
%flag	hookerWindowOpen		64
%flag	alleyWindowBroken		65
%flag	mouthOK				66
%flag	OK					67
%flag	dontHaveIt			68
%flag	nearPerson			69
%flag	noFawnInDisco			70
%flag	gaveFawnRose			71
%flag	gaveFawnCandy			72
%flag	gaveFawnRing			73
%flag	dancedWithFawn			74
%flag	scriptDone			75
%flag	faithGone				76
%flag	beenIn43				77
%flag	answeredSurvey			78
%flag	gaveFawnEverything		79
%flag	orderedWine			80
%flag	ropeOnBed				81
%flag	fawnInRoom			82
%flag	unsuccessfulCeremony	83
%flag	eveGone				84
%flag	programControl			85
%flag	egoLoweringDone		86
%flag	preventSaveGame		87
%flag	gaveEveApple			88
%flag	diedOfTheClap 			89
%flag	pimpWatchingTV			90
%flag	wornRubber			91
%flag	satWithFawn			92
%flag	betInProgress			93
%flag	boughtWhiskey			94
%flag	lookedAtFawn			95
%flag	talkedToFawn			96
%flag	askedForMoney			97
%flag	gotPimpToWatchTV		98
%flag	paidPimpForWhore		99
%flag	rodeInCab				100
%flag	mouseMachine			101
%flag	twoButtonJoystick		102
%flag	talkedToFlasher		103
%flag	heardLiquorStoreNumber	104
%flag	beenIn11				105
%flag	requestedASaveGame		106
%flag	mouthSmellsBad			107
%flag	typing				108
%flag	passedTest			109
%flag	marriedFawn			110
%flag	seenDeliveryBoyGag		111
%flag	readSideOfPhone		112
%flag	answeredSurveyFirstTime	113
%flag	heardSurveyFirstTime	114
%flag	orderedWineFirstTime	115
%flag	poopedInCan			116
%flag	satOnWhoopieCushion		117
%flag	slowProcessor			118
%flag	shownPassToBouncer		119
%flag	readMagazine			120
%flag	dialedSierra			121
%flag	makeFawnDance			122
%flag	memoryCheck			123
%flag	makeEgoRise			124	[	in disco scene
%flag	makeFawnSplit			125
%flag	inflatedDoll			126
%flag	sprayDone				127
%flag	beenInPenthouse		128
[nextflag



[************      VARS      ************]
[Only the interpreter can use	  0-29	(globals)
[		Any room can use	220-239	(lv's)
[Only dynamic logics can use	240-255	(dv's)

%var		currentStatus			30
#define	NORMAL			0
#define	DEAD				1
#define	SLEEPING			2
#define	COLLAPSING		3
#define	STUNNED			4
#define	FALLING			5
#define	WALKING			6
#define	ON_BAR_STOOL		7
#define	DRUNK			8
#define	ON_TOILET			9
#define	DROWNING			10
#define	HUMPING_HOOKER		11
#define	LEAVING_WINDOW		12
#define	HANGING_BY_ROPE	13
#define	IN_DUMPSTER		14
#define	RUN_OVER			15
#define	DANCING			16
#define	SITTING			17
#define	IN_ELEVATOR		18
#define	TIED_TO_BED		19
#define	STIFFED_CABBIE		20
#define	PISSING			21
#define	CHASING_DOLL		22
#define	FOLLOWING_EVE		23
#define	DYING_OF_CLAP		25
#define	NAKED			26
#define	RECYCLING			27
[	#define	28
[	#define	29						   

%var		egoLocation			31
%var		x					32
%var		y					33
%var		sourceX				34
%var		sourceY				35
%var		targetX				36
%var		targetY				37
%var		egoX					38
%var		egoY					39
%var		oldEgoX				40
%var		oldEgoY				41
%var		oldEgoDir				42
%var		oldSeconds			43
%var		oldAnimationInterval	44
	#define	FASTEST_SPEED	0
	#define	FAST_SPEED	1
	#define	NORMAL_SPEED	2
	#define	SLOW_SPEED	3

%var		debug0				45
%var		debug1				46
%var		startClimbing			47
%var		roomBottom			48
%var		zero					49
%var		deathMessage			50
%var		testRoom				51
%var		work					52
%var		view					53
%var		loop					54
%var		cell					55
%var		step					56
%var		priority				57
%var		message				58
%var		egoCycleTime			59
%var		egoStepTime			60
%var		egoStepSize			61
%var		passInRoom			62
%var		secondsInRoom			63
%var		taxiScript			64
	#define	TAXI_WAITING	4

%var		script				65
%var		scriptCycles			66
%var		scriptTimer			67
%var		clearStatusSeconds		68
%var		mouthMessage			69
%var		sprayCount			70
%var		spraySeconds			71
%var		sprayMinutes			72
#define	SPRAY_INIT_MINUTES	 10

[	%var		73
[	%var		74

%var		deathTimer			75
%var		newRoom				76
%var		currentEgoView			77
%var		oldEdgeEgoHit			78
%var		destinationFloor		79
%var		breathSpraySeconds		80
%var		picture				81
%var		TVChannel				82
%var		moneyTimer			83
%var		one					84
%var		two					85
%var		three				86
%var		four					87
%var		five					88
%var		oldLastChar			89
%var		dollars				90
%var		secondsSinceKeystroke	91
%var		answer				92
%var		correctAnswer			93
%var		question				94
%var		questionStatus			95
	%define	waiting		1
	%define	askAnother	2
	%define	allDone		3
	%define	waitAwhile	4
	%define	waitAwhileAlthoughCorrect	5

%var		currentQuestion		96
%var		cabFareMin			97
%var		notMovedCycles			98
%var		cabRideLength			99
%var		fawnTalkCount			100
%var		oldCurrentScore		101
[nextvar
[	%var		102
[	%var		103
[	%var		104
[	%var		105
[	%var		106
[	%var		107
[	%var		108
[	%var		109
[	%var		110
[	%var		111
[	%var		112
[	%var		113
[	%var		114
%var		gameSeconds			115
%var		gameMinutes 			116
%var		gameHours 			117
%var		gameDays 				118
%var		watchHours			119
#define	WATCH_INIT_HOURS	 10




[*********** ANIMATED OBJECTS ***********]
[Define here all objects shared by multiple rooms.
%object	ego					0
[	%object	a	10
[	%object	a	11
%object	aCop					12
%object	aTaxi				13
%object	aDog					14
%object	aCar					15



[*********  INVENTORY OBJECTS  **********]
	
%object	iWallet				1
%object	iBreathSpray			2
%object	iPocketLint			3
%object	iWatch				4
%object	iApple				5
%object	iRing				6
%object	iWhiskey				7
%object	iRemoteControl			8
%object	iRose				9 
%object	iRubber				10
%object	iUsedRubber			11
%object	iCandy				12
%object	iDoll				13
%object	iDiscoPass			14
%object	iPocketKnife			15
%object	iWine				16
%object	iMagazine				17
%object	iHammer				18
%object	iPills				19
%object	iRope				20
#define	SIZE_OF_INVENTORY		20



[*********    SOUND EFFECTS    **********]
#define	sEgoFalling			1
#define	sError				2
#define	sSlots				3
#define	sSlotsWinner			4
#define	sCardsShuffling		5
#define	sCard				6
#define	sBJWinner				7
#define	sDrummer				8
#define	sWhoopieCushion		9
#define	sTaxiTires			10
#define	sDeathCar				11
#define	sPissing				12
#define	sBang				13
#define	sFart				14
#define	sDollDeflating			15


[************     MUSIC     *************]
#define	mTitle				21
#define	mDog					22	
#define	mWedding				23
#define	mWinner				24
#define	mWhoops				25
#define	mAlley				26
#define	mRm14Drunk			27
#define	mRm22Drunk			28
#define	mCop					29
#define	mDisco				30
#define	mCanCan				31
#define	mSunrise				32
#define	mFuneral				33



[******   ROOM AND PICTURE NAMES   ******]
#define	rmTitle				1
#define	picCredits1			2
#define	picCredits2			3
#define	picCredits3			4
#define	picFrame				5
#define	rmAgeTest				6
#define	picBlack				7
#define	rmWorkshop			8
#define	rmDarkAlley			9
#define	rmInsideTaxi			10
#define	rmOutsideBar			11
#define	rmAlley				12
#define	rmToilet				13
#define	rmHallway				14
#define	rmInsideBar			15
#define	rmBackroom			16
#define	rmHooker				17
%define	picHookerCloseup		18
%define	rmSunrise				19
%define	rmBoss				20
#define	rmInside7_11			21
#define	rmOutside7_11			22
#define	rmOutsideDisco			23
#define	rmInsideDisco			24
%define	rmFawnCloseup			25
%define	picFaithCloseup		26
%define	picEveCloseup			27
%define	picDollCloseup			28
%define	picBoss2				29
%define	picBoss3				30
#define	rmInsideCasino			31
#define	rmOutsideCasino		32
#define	rmOutsideChapel		33
#define	rmInsideChapel			34
#define	rmElevatorBottom		35
#define	rmLounge				36
#define	rmSlots				37
#define	rmBlackjack			38
[	%define	rm	39
#define	rmElevators			40
#define	rmHoneymoonSuite		41
#define	rmSecurityDesk			42
#define	rmHotTub				43
#define	rmLivingRoom			44
#define	rmBedroom				45

#define	rmRestart			rmOutsideBar



[**********   DYNAMIC LOGICS   **********]
#define	lgcRm0InitLog			50
#define	lgcStartup			51
#define	lgcDebug				52
#define	lgcTrace				53 
#define	lgcError				54
#define	lgcHelp				55
#define	lgcBlackjack			56
#define	lgcStreet				57
#define	lgcSlots				58
#define	lgcID				59

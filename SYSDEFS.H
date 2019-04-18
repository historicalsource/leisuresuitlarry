[
[	sysdefs.h
[
[					AL'S SYSDEFS 
[
[	February 25, 1987
[



[**************    ACTIONS   **************]

%action	Return()								0

[Variable actions
%action	Increment(VAR)							1
%action	Decrement(VAR)							2
%action	Assignn(VAR, NUM)						3
%action	Assignv(VAR, VAR)						4
%action	Addn(VAR, NUM)							5
%action	Addv(VAR, VAR)							6
%action	Subn(VAR, NUM)							7
%action	Subv(VAR, VAR)							8
%action	Lindirectv(VAR, VAR)					9
%action	Rindirect(VAR, VAR)						10
%action	Lindirectn(VAR, NUM)					11

%action	increment(VAR)							1
%action	decrement(VAR)							2
%action	assignn(VAR, NUM)						3
%action	assignv(VAR, VAR)						4
%action	addn(VAR, NUM)							5
%action	addv(VAR, VAR)							6
%action	subn(VAR, NUM)							7
%action	subv(VAR, VAR)							8
%action	lindirectv(VAR, VAR)					9
%action	rindirect(VAR, VAR)						10
%action	lindirectn(VAR, NUM)					11

%action	Set(FLAG)								12
%action	Reset(FLAG)							13
%action	Toggle(FLAG)							14
%action	SetV(VAR)								15
%action	ResetV(VAR)							16
%action	ToggleV(VAR)							17

[Logics
%action	NewRoom(NUM)							18
%action	NewRoomV(VAR)							19
%action	LoadLogics(NUM)						20
%action	LoadLogicsV(VAR)						21
%action	Call(NUM)								22
%action	CallV(VAR)							23

[Pictures
%action	LoadPic(VAR)							24
%action	DrawPic(VAR)							25
%action	ShowPic()								26
%action	DiscardPic(VAR)						27
%action	OverlayPic(VAR)						28
%action	ShowPriScreen()						29

[Views
%action	LoadView(VIEW)							30
%action	LoadViewV(VAR)							31
%action	DiscardView(VIEW)						32

[Animated objects
%action	AnimateObj(OBJECT)						33
%action	UnanimateAll()							34
%action	Draw(OBJECT)							35
%action	Erase(OBJECT)							36
%action	Position(OBJECT, NUM, NUM)				37
%action	PositionV(OBJECT, VAR, VAR)				38
%action	GetPosn(OBJECT, VAR, VAR)				39
%action	Reposition(OBJECT, VAR, VAR)				40

[Views of animated objects
%action	SetView(OBJECT, VIEW)					41
%action	SetViewV(OBJECT, VAR)					42
%action	SetLoop(OBJECT, NUM)					43
%action	SetLoopV(OBJECT, VAR)					44
	%define	FACING_RIGHT			0
	%define	FACING_LEFT			1
	%define	FACING_FRONT			2
	%define	FACING_BACK			3
%action	FixLoop(OBJECT)						45
%action	ReleaseLoop(OBJECT)						46
%action	SetCel(OBJECT, NUM)						47
%action	SetCelV(OBJECT, VAR)					48
%action	LastCel(OBJECT, VAR)					49
%action	CurrentCel(OBJECT, VAR)					50
%action	CurrentLoop(OBJECT, VAR)					51
%action	CurrentView(OBJECT, VAR)					52
%action	NumberOfLoops(OBJECT, VAR)				53

[Priority control of animated objects
%action	SetPriority(OBJECT, NUM)					54
%action	SetPriorityV(OBJECT, VAR)				55
%action	ReleasePriority(OBJECT)					56
%action	GetPriority(OBJECT, VAR)					57

[Attributes of animated objects
%action	StopUpdate(OBJECT)						58
%action	StartUpdate(OBJECT)						59
%action	ForceUpdate(OBJECT)						60
%action	IgnoreHorizon(OBJECT)					61
%action	ObserveHorizon(OBJECT)					62
%action	SetHorizon(NUM)						63
%action	ObjectOnWater(OBJECT)					64
%action	ObjectOnLand(OBJECT)					65
%action	ObjectOnAnything(OBJECT)					66
%action	IgnoreObjs(OBJECT)						67
%action	ObserveObjs(OBJECT)						68
%action	Distance(OBJECT, OBJECT, VAR)				69

[Cycling of animated objects
%action	StopCycling(OBJECT)						70
%action	StartCycling(OBJECT)					71
%action	NormalCycle(OBJECT)						72
%action	EndOfLoop(OBJECT, FLAG)					73
%action	ReverseCycle(OBJECT)					74
%action	ReverseLoop(OBJECT, FLAG)				75
	%define	BeginningOfLoop	ReverseLoop
%action	CycleTime(OBJECT, VAR)					76
	%define	CycleFrequency		CycleTime

[Motion of animated objects
%action	StopMotion(OBJECT)						77
%action	StartMotion(OBJECT)						78
%action	StepSize(OBJECT, VAR)					79
%action	StepTime(OBJECT, VAR)					80
	%define	StepFrequency			StepTime

%action	MoveObj(OBJECT, NUM, NUM, NUM, FLAG)		81
%action	MoveObjV(OBJECT, VAR, VAR, VAR, FLAG)		82
			[object,  x,  y,  stepsize (preferably 0),  flag to set upon arrival
%action	FollowEgo(OBJECT, NUM, FLAG)				83
%action	Wander(OBJECT)							84
%action	NormalMotion(OBJECT)					85
%action	SetDir(OBJECT, VAR)						86
%action	GetDir(OBJECT, VAR)						87
											
%action	IgnoreBlocks(OBJECT)					88
%action	ObserveBlocks(OBJECT)					89
%action	Block(NUM, NUM, NUM, NUM)				90
%action	Unblock()								91

[Inventory objects
%action	Get(OBJECT)							92
%action	GetV(VAR)								93
%action	Drop(OBJECT)							94
%action	Put(OBJECT, VAR)						95
%action	PutV(VAR, VAR)							96
%action	GetRoomV(VAR, VAR)						97

[Sounds
%action	LoadSound(NUM)							98
%action	Sound(NUM, FLAG)						99
%action	StopSound()							100

[Screen Display
%action	Print(MSGNUM)							101
%action	PrintV(VAR)							102
%action	Display(NUM, NUM, MSGNUM)				103
			[row, col, message
%action	DisplayV(VAR, VAR, VAR)					104
			[row, col, message
%action	ClearLines(NUM, NUM, NUM)				105
			[top row, bottom row, attribute
%action	TextScreen()							106
%action	Graphics()							107
%action	SetCursorChar(MSGNUM)					108
%action	SetTextAttribute(NUM, NUM)				109
%action	ShakeScreen(NUM)						110

[Screen handling
%action	ConfigureScreen(NUM, NUM, NUM)			111
[			picture row, input row, status row
%action	StatusLineOn()							112
%action	StatusLineOff()						113

[String handling
%action	SetString(NUM, MSGNUM)					114
%action	GetString(NUM, MSGNUM, NUM, NUM, NUM)		115
				[string#, prompt, row, col, max length
%action	WordToString(NUM, NUM)					116
				[word#, string#
%action	Parse(NUM)							117
%action	GetNum(MSGNUM, VAR)						118

[Input handling
%action	PreventInput()							119
%action	AcceptInput()							120
%action	SetKey(NUM, NUM, NUM)					121
	%define	JOYSTICK_LOW_BYTE	1
	%define	BUTTON_0			1
	%define	BUTTON_1			2
	%define	BUTTON_0_DOUBLE		3
	%define	BUTTON_1_DOUBLE		4

[Add to picture
%action	AddToPic(VIEW, NUM, NUM, NUM, NUM, NUM, NUM)	122
				[view, loop, cel,  x,   y, obj priority, box priority
%action	AddToPicV(VAR, VAR, VAR, VAR, VAR, VAR, VAR)	123
				[view, loop, cel,  x,   y, obj priority, box priority
	%define	AddToPicture				AddToPic
	%define	AddToPictureV				AddToPicV

[User requested actions
%action	Status()								124
%action	SaveGame()							125
%action	RestoreGame()							126
%action	InitDisk()							127
%action	RestartGame()							128

[Show object view
%action	ShowObj(VIEW)							129

[Miscellaneous
%action	Random(NUM, NUM, VAR)					130
%action	ProgramControl()						131
%action	PlayerControl()						132
%action	ObjStatusV(VAR)						133
%action	Quit(NUM)								134
		[0 = prompt
		[1 = immediate
%action	ShowMem()								135
%action	Pause()								136
%action	EchoLine()							137
%action	CancelLine()							138
%action	InitJoy()								139
%action	ToggleMonitor()						140
%action	Version()								141
%action	ScriptSize(NUM)						142
%action	SetGameId(MSGNUM)						143
%action	Log(MSGNUM)							144
%action	SetScanStart()							145
%action	ResetScanStart()						146

%action	RepositionTo(OBJECT, NUM, NUM)			147
%action	RepositionToV(OBJECT, VAR, VAR)			148

%action	TraceOn()								149
%action	TraceInfo(NUM, NUM, NUM)					150
				[logic #, position of top of window, number of lines
%action	PrintAt(MSGNUM, NUM, NUM, NUM)			151
				[msg #, row, col, width
%action	PrintAtV(VAR, NUM, NUM, NUM)				152	
				[msg #, row, col, width
%action	DiscardViewV(VAR)						153
%action	ClearTextRect(NUM, NUM, NUM, NUM, NUM)		154
				[top, left, bottom, right, attribute
%action	SetUpperLeft(NUM, NUM)					155	[x, y
%action	SetMenu(MSGNUM)						156
				[menu name]
%action	SetMenuItem(MSGNUM, NUM)					157
				[item name, controller number]
%action	SubmitMenu()							158
				[terminate menu collecting]
%action	EnableItem(NUM)						159
				[enable item corresponding to controller]
%action	DisableItem(NUM)						160
				[disable item corresponding to controller]
%action	MenuInput()							161
				[pause game; display menus, at last choice
%action	ShowObjV( VAR)							162

#action	OpenDialogue()							163
#action	CloseDialogue()						164

#action	MulN(VAR, NUM)							165
#action	MulV(VAR, VAR)							166
#action	DivN(VAR, NUM)							167
#action	DivV(VAR, VAR)							168

#action	CloseWindow()			  				169




[**************     TESTS    **************]

%test	Equaln(VAR, NUM)					1
%test	Equalv(VAR, VAR)					2
%test	Lessn(VAR, NUM)					3
%test	Lessv(VAR, VAR)					4
%test	Greatern(VAR, NUM)					5
%test	Greaterv(VAR, NUM)					6
%test	Isset(FLAG)						7
%test	IssetV(VAR)						8
%test	Has(OBJECT)						9
%test	ObjInRoom(OBJECT, VAR)				10
%test	Posn(OBJECT, NUM, NUM, NUM, NUM)		11
%test	Controller(NUM)					12
%test	HaveKey()							13
%test	Said(WORDLIST)						14
%test	CompareStrings(NUM, NUM)				15
%test	ObjInBox(OBJECT, NUM, NUM, NUM, NUM)	16
%test	CenterPosn(OBJECT, NUM, NUM, NUM, NUM)	17
%test	RightPosn(OBJECT, NUM, NUM, NUM, NUM)	18

%test	equaln(VAR, NUM)					1
%test	equalv(VAR, VAR)					2
%test	lessn(VAR, NUM)					3
%test	lessv(VAR, VAR)					4
%test	greatern(VAR, NUM)					5
%test	greaterv(VAR, NUM)					6
%test	isset(FLAG)						7
%test	isset.v(VAR)						8
%test	has(OBJECT)						9
%test	obj.in.room(OBJECT, VAR)				10
%test	posn(OBJECT, NUM, NUM, NUM, NUM)		11
%test	controller(NUM)					12
%test	have.key()						13
%test	said(WORDLIST)						14
%test	compare.strings(NUM, NUM)			15
%test	obj.in.box(OBJECT, NUM, NUM, NUM, NUM)	16
%test	center.posn(OBJECT, NUM, NUM, NUM, NUM)	17
%test	right.posn(OBJECT, NUM, NUM, NUM, NUM)	18



[************** 	VARS    **************

%var		currentRoom			0
%var		previousRoom			1
%var		edgeEgoHit			2
	%define	NOT_HIT		0		
	%define	TOP			1		
	%define	RIGHT		2		
	%define	BOTTOM		3		
	%define	LEFT			4
%var		currentScore			3
%var		objHitEdge			4
%var		edgeObjHit			5
%var		egoDir				6
	%define	EGO_STOPPED	0
	%define	EGO_UP		1
	%define	EGO_UP_RIGHT	2
	%define	EGO_RIGHT		3
	%define	EGO_DOWN_RIGHT	4
	%define	EGO_DOWN		5
	%define	EGO_DOWN_LEFT	6
	%define	EGO_LEFT		7
	%define	EGO_UP_LEFT	8
%var		maxScore				7
%var		memoryLeft			8
%var		unknownWord			9
%var		animationInterval		10
%var		elapsedSeconds			11
%var		elapsedMinutes			12
%var		elapsedHours			13
%var		elapsedDays			14
%var		doubleClickDelay		15
%var		currentEgo			16
%var		errorNumber			17
%var		errorParameter			18
%var		lastChar				19
%var		machineType			20
	#define	PC			0		[PC, compatibles
	#define	JR			1		[PCjr
	#define	TANDY		2		[Tandy 1000
	#define	APPLEII		3		[Apple IIe, IIc
	#define	ST			4		[Atari ST
	#define	AMIGA		5		[Amiga
	#define	MAC			6		[Fat Mac, Mac Plus
	#define	CORTLAND		7		[?
%var		printTimeout			21	[in 1/2 second increments
%var		numberOfVoices			22	[in this machine's sound chip
%var		attenuation			23	[0 - 15 == loud - off
%var		inputLength			24	[max length of user input allowed
%var		selectedObject			25	[obj # selected from status screen
%var		monitorType			26
	%define	COMPOSITE		0
	%define	RGB			1
	%define	MONO			2
	%define	EGA			3



[************** 	FLAGS    **************

%flag	onWater				0
%flag	egoHidden				1
%flag	haveInput				2
%flag	hitSpecial			3
%flag	haveMatch				4
%flag	initLog				5
%flag	restartInProgress		6
%flag	noScript				7
%flag	enableDoubleClick		8
%flag	soundOn				9
%flag	enableTrace			10
%flag	hasNoiseChannel		11		[set if machine has noise channel
%flag	restoreInProgress		12
%flag	enableObjectSelect		13		[set if ok to choose from status screen
%flag	enableMenu			14
%flag	leaveWindow			15
%flag	noPromptRestart		16



[************	  CONSTANTS   **************]

[	screen boundaries:
	%define	TOP_EDGE			0
	%define	BOTTOM_EDGE		167
	%define	LEFT_EDGE			0
	%define	RIGHT_EDGE 		159
	%define	SCREEN_TOP		0
	%define	SCREEN_BOTTOM		167
	%define	SCREEN_LEFT		0
	%define	SCREEN_RIGHT		159
	%define	FALL_THROUGH		200		[makes ego move off screen

	%define	MAX_FLAG_VALUE		255		[maximum value storable
	%define	ERROR			-1

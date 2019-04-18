[
[	bj.h
[
[	LEISURE SUIT LARRY IN THE LAND OF THE LOUNGE LIZARDS BLACKJACK HEADER
[
[	Wednesday, March 4, 1987 at 11:21 p.m.
[	Sunday, May 31, 1987 at 8:56 p.m.
[



%object	aWinner				13	[	Animated objects.
%object	aQuestion				14
%object	aCards				15


#define	CLUBS				152	[	Defines of view numbers.
#define	SPADES				153
#define	HEARTS				154
#define	DIAMONDS				155
#define	BLANK_CARD			156
#define	CARD_BACK				157


%flag	pSoftAce				242	[	Flags.
%flag	dSoftAce				243
%flag	sSoftAce				244
%flag	showHelpMessage		245
%flag	pBlackjack			246
%flag	dBlackjack			247
%flag	pDoubledDown			248
%flag	sDoubledDown			249
%flag	pSixCardWinner			250
%flag	sSixCardWinner			251
%flag	softAce				252
%flag	waitingForInput		253
%flag	insured				254
%flag	readyToLeave			255


%var		oldDTotal				216
%var		oldPTotal				217
%var		oldSTotal				218
%var		clueTimer				219
%var		work2				220	[	Vars.
%var		work3				221
%var		dTotal				222
%var		pTotal				223
%var		sTotal				224
%var		sBet					225
%var		pBet					226
%var		insurance				227
%var		winnings				228
%var		function				229	[which function to execute in rm56.
	#define	DRAW_CARD		1
	#define	ERASE_CARD	2
	#define	DRAW_FACE_DOWN	3
	#define	GET_SUIT_VALUE	4
	#define	PAY_WINNER	5
	#define	UPDATE_STATUS	6
	#define	SHOW_TOTALS	7

%var		suit					230
%var		value				231
%var		card					232
%var		cardCount				233	[	How many cards are visible.
%var		cardToTest			234
%var		currentCard			235	[	Used as a pointer to vars below.
%var		handInPlay			236
	#define	NONE			0
	#define	PLAYER		1
	#define	SPLIT 		2
	#define	DEALER		3
	#define	HAND_DONE		255


[	Vars numbered 237 through 254 contain the card values for the 3 hands.
[They are only referenced indirectly, so no defines are needed.

	%define	firstCard		237		[	First var containing a card.
	%define	dFirstCard	237		[	Var numbers of the
	%define	pFirstCard	243		[			first card of
	%define	sFirstCard	249		[					each hand.
	%define	lastCard		254		[	Last var containing a card.

%var		oldBet				255

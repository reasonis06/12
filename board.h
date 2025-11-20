#define N_BOARD								20
#define BOARDSTATUS_OK				1
#define BOARDSTATUS_NOK				0

void board_printBoardStatus(void);
void board_initBoard(void);
int board_getBoardCoin(int pos);
int board_getBoardStatus(int turn);
int board_stepShark(void);

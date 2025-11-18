#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

#define MAX_DICE			6
int roll_dice(void)
{
	return rand()%MAX_DICE + 1;
}
int main(int argc, char *argv[])
{
	srand((unsigned)(time(NULL)));
	
	printf("============================================\n");
	printf("********************************************\n");
	printf("              SHARK GAME START              \n");
	printf("********************************************\n");
	printf("============================================\n");

	//step 1. initialization (player name setting, variables) 
	board_initBoard();

	
	//step 2. turn play (do-while) 
	int cnt = 0;
	int pos = 0;
	do {
			int dice_result;
			int coinResult;
			// 2-1. status printing
			board_printBoardStatus();
			// 2-2. roll dice
			dice_result = roll_dice();
			// 2-3. move (result)
			pos += dice_result;
			
			printf("pos : %i(dice: %i)\n", pos, dice_result);

			
			//coinResult = board_getBoardCoin(pos);
			
			printf("coin : %i\n");
			
			// 2-4. change turn, shark move
			cnt++;
	} while(cnt < 5);
	//step 3. game end (winner printing)

  printf("\n\n\n\n\n\n\n");
  printf("============================================\n");
	printf("********************************************\n");
	printf("               SHARK GAME END               \n");
	printf("********************************************\n");
	printf("============================================\n");

  
  system("PAUSE");	
  return 0;
}

	// 플레이어 설정(이름, 초기 위치) 
	
	// 반복 시작 
		// 주사위 굴리기
		// 칸 이동
		// 동전이 있다면 획득(조건문) 
		// 모든 플레이어 턴 완료 후 
		// 상어가 쫓아옴
	// 반복 끝 

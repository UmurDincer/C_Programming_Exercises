#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include "cumur.h"
//returns 1 if player wins returns 0 otherwise

#define NGAMES 1000000

int rolldice()
{
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	
	return dice1 + dice2;
}

int game_(int dice)
{   int new_dice;
	for(;;){
		new_dice == rolldice();
		if(new_dice == dice)
			return 1;
		if(new_dice == 7)
			return 0;
	}
}

int game(void)
{
	int dice = rolldice();
	
	switch(dice) {
	case 7: case 11: return 1;
	case 2: case 3: case 12: return 0;
	default: return game_(dice);
	}
	
}

int main()
{
	int win_count = 0;
	int i;
	for(i = 0; i< NGAMES; ++i){
		win_count += game();
	}
	
	printf("oyuncunun kazanma olasiligi = %.10f\n", 100. * win_count / NGAMES);
}

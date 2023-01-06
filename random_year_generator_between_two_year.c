#include "cumur.h"

#define RANDOM_MIN_YEAR 1995
#define RANDOM_MAX_YEAR 2021

int main()
{
	int i;
	randomize();
	
	for(i = 0; i < 100 ; ++i){
		printf("%d ", rand() % (RANDOM_MAX_YEAR - RANDOM_MIN_YEAR + 1) + RANDOM_MIN_YEAR);
	} 
}

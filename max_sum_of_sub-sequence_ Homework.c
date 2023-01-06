#include "cumur.h"
#include <conio.h>
#include <time.h>

#define SIZE 100
//max sum of sub-sequence
// calculate max sum of sub sequence like
// -1 2 5 8 4 -12 -5 1 2 6
// the max sub sequence is 2 5 8 4 and its sum is 19.
int main()
{
	int a[SIZE];
	int i;
	
	randomize();
	
	for(i = 0; i < SIZE; ++i){
		a[i] = (rand() % 2 ? 1:-1)*(rand() % 1000);
		if(i && i % 20 == 0)
			printf("\n");
		printf("%3d ", a[i]);
	}
	printf("\n");
}

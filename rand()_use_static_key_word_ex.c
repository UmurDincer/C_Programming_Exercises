#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>

#define URAND_MAX 100

int urand(void)
{
	static int flags[URAND_MAX] = { 0 };
	static int count = 0;
	int val;
	
	if(count == URAND_MAX)
		return -1;
		
	while(flags[val = rand() % URAND_MAX])
		;
		
	return val;
}

int main()
{
	randomize();
	
	for(int i = 0; i < URAND_MAX; ++i){
		printf("%d ", urand());
	}
	printf("\n");
	
	printf("%d ", urand());
}

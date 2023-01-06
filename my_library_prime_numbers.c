#include "cumur.h"

int main()
{
	int low, high;
	int prime_count = 0;
	int temp;
	int i;
	
	printf("enter integer intervals: ");
	scanf("%d%d", &low, &high);
	
	if(low>high){
		temp = low;
		low = high;
		high =temp;	
	}
	
	for (i = low; i<=high; ++i){
		if(isprime(i)){
			++prime_count;
			printf("%d ", i);
			sleep(0.05);
		}
	}
	
	printf("\n between [%d %d], there are %d prime number.\n", low, high, prime_count);
	dline();
	printf("push a button to continue\n");
	getch();
	cls();
	printf("Program is still running.\n");
}

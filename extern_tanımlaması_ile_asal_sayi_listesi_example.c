#include<stdio.h>
#include"cumur.h"

int main()
{
	int idx;
	printf("bir index girin: ");
	scanf("%d", &idx);
	
	printf("%d. asal sayi %d\n", idx, primes[idx]);
	printf("\n\n");
	printf("%d. asal sayi %d\n", idx, nth_prime(idx));
}

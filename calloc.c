#include<stdlib.h>
#include"cumur.h"

int main()
{
	size_t n;
	int *pd;
	
	printf("kac tam sayi: ");
	scanf("%zu", &n);
	
	pd = calloc(n, sizeof(int)); // pd = (int *)calloc(n, sizeof(int)); // ayný anlama gelir.
	if(pd == NULL){
		printf("bellek yetersiz!\n");
		exit(EXIT_FAILURE);
	}
	

	display_array(pd, n);
	
	//..
	
	free(pd);
	//..
}

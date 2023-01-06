#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "cumur.h"

#define 	 SIZE 		100



int main()
{
	int a[SIZE];
	int sval;
	int *p;
	randomize();
	set_random_array(a, SIZE);
	qsort(a, SIZE, sizeof *a, icmp);
	display_array(a, SIZE);
	
	printf("aranacak degeri giriniz: ");
	scanf("%d", &sval);
	
	if((p = bsearch(&sval, a, SIZE, sizeof(int), icmp)) != NULL)
		printf("bulundu. dizinin %d indisli elemani (%d)\n", p - a, *p);
	else
		printf("bulunamadi\n");	
	
}

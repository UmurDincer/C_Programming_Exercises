#include<stdlib.h>
#include<conio.h>
#include"cumur.h"
#include<string.h>

int main()
{
	int n;
	int *pd;
	
	printf("kac tam sayi: ");
	scanf("%d", &n);
	
	
	if((pd = calloc(n, sizeof(int))) == NULL){
		fprintf(stderr, "bellek yetersiz\n");
		return 1;
	} 
	
	
	display_array(pd, n);

	free(pd);
	
}

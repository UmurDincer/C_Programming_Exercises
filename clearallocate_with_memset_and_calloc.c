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
	
	
	if((pd = malloc(n * sizeof(int))) == NULL){
		fprintf(stderr, "bellek yetersiz\n");
		return 1;
	} 
	
	memset(pd, 0, n * sizeof(int));
	display_array(pd, n);

	free(pd);
	
}

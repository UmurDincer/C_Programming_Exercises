#include<stdlib.h>
#include<conio.h>
#include"cumur.h"
#include<string.h>


int main()
{
	int n, n_add;
	
	int *pd;
	
	printf("kac tam sayi: ");
	scanf("%d", &n);
	
	
	if((pd = malloc(n * sizeof(int))) == NULL){
		fprintf(stderr, "bellek yetersiz\n");
		return 1;
	} 
	
	set_random_array(pd, n);
	display_array(pd, n);
	
	printf("kac tam sayi eklemek istiyorsunuz? ");
	scanf("%d", &n_add);

	pd = realloc(pd, (n + n_add) * sizeof(int));
	if(!pd){
		printf("bellek blogu buyutulemedi\n");
		return 1;
	}
	
	set_random_array(pd + n, n_add);
	display_array(pd, n + n_add);
	
	free(pd);
	
}

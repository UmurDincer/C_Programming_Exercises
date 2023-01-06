#include<stdlib.h>
#include"cumur.h"
#include<stdio.h>

#define SIZE 100

void * checked_malloc(size_t n)
{
	void *vp = malloc(n);
	if(!vp){
		fprintf(stderr, "cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}
	return vp;
}

int main()
{
	size_t n;
	int *pd;
	
	printf("kac tam sayi: ");
	scanf("%zu", &n);
	pd = checked_malloc(n * sizeof(int));
	set_random_array(pd, n);
	display_array(pd, n);
	
	free(pd);
}

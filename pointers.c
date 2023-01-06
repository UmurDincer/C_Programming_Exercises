#include<stdio.h>
#include"cumur.h"
int x = 23;
int y = 45;
int z = 90;

int main()
{
	int *a[] = { &x, &y, &z};
	
	printf("boyut a = %zu\n", asize(a));
	printf("boyut a = %zu\n", sizeof(a)/sizeof(*a));
}


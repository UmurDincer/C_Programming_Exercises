#include<stdio.h>
#include"cumur.h"

int main()
{
	int x = 10;
	int *ptr = &x;
	int ** p = &ptr;
	
	printf("&x  = %p \n", &x); 
	printf("ptr = %p \n", ptr);
	printf("\n");
	
	printf("&ptr = %p\n", &ptr);
	printf("p    = %p\n", p);
}

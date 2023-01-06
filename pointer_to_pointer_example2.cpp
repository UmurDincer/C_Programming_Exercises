#include<stdio.h>
#include"cumur.h"

int main()
{
	int a[5] = { 0, 10, 20, 30, 40 };
	int *p = a;
	int **ptr = &p;
	
	++*ptr;
	++**ptr;
	
	display_array(a, 5);
} 

#include<stdio.h>
#include"cumur.h"

int main()
{
	int x = 10;
	int y = 99;
	int *ptr = &x;
	int ** p = &ptr;
	
	*p = &y; // ptr = &y
	++**p;
	printf("%d \n", y);

}

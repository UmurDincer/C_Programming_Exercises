#include<stdio.h>
#include"cumur.h"

int x = 10;
int y = 20;
int z = 30;

int main()
{
	int ival = 54;
	const int *p[] = {&x, &y, &z};
	
	p[1] = &ival;
}

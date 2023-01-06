#include<stdio.h>
#include"cumur.h"
int a[] = {1,2,3,4};
int b[] = {-1,-2,-3,-4};
int c[] = {10,30,56};

int main()
{
	int *p[] = {a, b, c};
	
	++p[1];
	++*p[1];
	
	display_array(b, 4);
	
	p[2][2] = 777;
	
	display_array(c, 3);
}


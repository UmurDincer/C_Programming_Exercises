#include<stdio.h>
#include"cumur.h"

int main()
{	
	int x= 10;
	int y = 29;
	int *p1 = &x;
	int *p2 = &y;
	
	int **const ptr = &p1;
	
//	ptr = &p2; // ge�ersiz
	*ptr = &x; //ge�erli
	**ptr= 345; // ge�erli
}


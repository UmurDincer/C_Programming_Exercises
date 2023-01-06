#include<stdio.h>
#include"cumur.h"

int main()
{
	int x = 10;
	int y = 23;
	int *p1 = &x, *p2 = &y;
	
	if(p1 == p2)
		printf("evet esit\n");
	else
		printf("hayir esit degil\n");
		
	p2 = &x;
	
	if(p1 == p2)
		printf("evet esit\n");
	else
		printf("hayir esit degil");
	
}

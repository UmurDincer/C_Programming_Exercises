#include<stdio.h>

#define square(a)  ((a)*(a)) //call as macroAR

int main()
{
	int val;
	int x;
	printf("enter an integer: ");
	scanf("%d", &val);
	
	x = square(val);
	
	printf("square of the %d is %d.\n", val, x);
}

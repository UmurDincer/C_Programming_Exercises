#include<stdio.h>

#define Max(a, b)  ((a)>(b) ? (a):(b))

int main()
{
	int x, y;
	printf("enter two integers: ");
	scanf("%d%d", &x, &y);
	
	printf("Max is %d.\n", Max(x, y));
}

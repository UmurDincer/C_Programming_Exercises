#include <stdio.h>
#include <math.h>

int power(int base, int exp)
{
	int result = 1;
	
	while(exp--)
		result *=base;
	
	return result;
}

int main()
{
	int x, y;
	
	printf("enter a number and its power:");
	scanf("%d%d", &x,&y);
	
	printf("%d to the power of %d is %d. \n", x, y, power(x, y));
}

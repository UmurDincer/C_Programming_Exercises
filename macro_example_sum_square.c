#include<stdio.h>
#define sum_square(a, b)   ((a)*(a)+(b)*(b))

int main()
{
	int x, y, z;
	
	printf("For a^2 + b^2, enter a and b: ");
	scanf("%d%d", &x, &y);
	
	z = sum_square(x, y);
	
	printf("%d^2 + %d^2 = %d\n", x, y, z);
}

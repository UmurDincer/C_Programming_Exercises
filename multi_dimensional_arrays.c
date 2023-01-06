#include<stdio.h>

int main()
{
	int a[10][20];
	
	printf("sizeof(int) = %zu\n", sizeof(int));
	printf("sizeof(a) = %zu\n", sizeof(a));
	printf("sizeof(a[0]) = %zu\n", sizeof(a[0]));
	printf("sizeof(a[0][0]) = %zu\n", sizeof(a[0][0]));
	
}

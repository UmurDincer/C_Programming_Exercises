#include<stdio.h>

int main()
{
	int a[5] = {2, 6, 7, 9, 1};
	double b[100] = { 0.};
	char str[400];
	
	printf("sizeof(a) = %zu\n", sizeof(a));
	printf("sizeof(b) = %zu\n", sizeof(b));
	printf("sizeof(str) = %zu\n", sizeof(str));
}

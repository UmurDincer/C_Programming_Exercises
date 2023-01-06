#include<stdio.h>

int main()
{
	int a[5] = { 0 };
	
	printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof(&a[0]));
}

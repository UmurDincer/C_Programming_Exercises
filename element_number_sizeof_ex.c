#include<stdio.h>

int main()
{
	int a[5]= {2, 6, 7, 9, 1};
	
	printf("%zu", sizeof(a) / sizeof(a[0]));
}

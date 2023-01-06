#include<stdio.h>
#include<string.h>
#include"cumur.h"

int main()
{
	int x;
	
	memset(&x, 255, sizeof x);
	printf("x = %d\n", x);
	// 1111 1111
	// 1111 1111
	// 1111 1111
	// 1111 1111
	// memory bu þekilde olur
	memset(&x, 1, sizeof x);
	printf("x = %d\n", x);
	// 0000 0001
	// 0000 0001
	// 0000 0001
	// 0000 0001
	// memory bu þekilde olur
	
	
}

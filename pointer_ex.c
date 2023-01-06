#include"cumur.h"

int g = 10;

int *foo(void)
{
	//code
	return &g;
}

int main()
{
	int *p;
	
	printf("g = %d\n", g);
	p = foo();
	printf("%d\n", *p);
	*p = 987;
	printf("g = %d\n", g);	
	*foo() = 99;
	printf("g = %d\n", g);
	++*foo();
	printf("g = %d\n", g);	
	
}

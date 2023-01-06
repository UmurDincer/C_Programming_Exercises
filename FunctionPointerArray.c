#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "cumur.h"

void f1(void)
{
	printf("f1 cagirildi.\n");
}
void f2(void)
{
	printf("f2 cagirildi.\n");
}
void f3(void)
{
	printf("f3 cagirildi.\n");
}
void f4(void)
{
	printf("f4 cagirildi.\n");
}
void f5(void)
{
	printf("f5 cagirildi.\n");
}

int main()
{
	void(*fa[])(void) = {f1, f2, f3, f4, f5};
	printf("asize(fa) = %zu\n", asize(fa));
	size_t i;
	for(i = 0; i < asize(fa); ++i)
		fa[i]();
	

}

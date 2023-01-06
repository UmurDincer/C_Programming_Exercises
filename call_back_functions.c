#include<stdio.h>
#include"cumur.h"

void foo(void(*fp)(void))
{
	printf("foo islevi cagirildi\n");
	fp();
	dline();
}

void f1(void)
{
	printf("f1 cagirildi\n");
}

void f2(void)
{
	printf("f2 cagirildi\n");
}

void f3(void)
{
	printf("f3 cagirildi\n");
}

int main()
{
	foo(&f1);
	
	foo(&f2);
	
	foo(&f3);
}

#include<stdio.h>
#include<stdlib.h>

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
void f4(void)
{
	printf("f4 cagirildi\n");
}

void func(void)
{
	printf("func cagirildi...\n");
	exit(EXIT_FAILURE);
}

int main()
{
	printf("main basladi\n");
	atexit(f1);
	atexit(f2);
	atexit(f3);
	atexit(f4);
	func();
	printf("main sonra erdi\n"); 
}

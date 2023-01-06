#include<stdio.h>
#include<stdlib.h>

void f4(void)
{
	printf("f4 baslatildi\n");
	exit(EXIT_FAILURE);
	printf("f4 sona erdi\n");
}

void f3(void)
{
	printf("f3 baslatildi\n");
	f4();
	printf("f3 sona erdi\n");
}

void f2(void)
{
	printf("f2 baslatildi\n");
	f3();
	printf("f2 sona erdi\n");
}

void f1(void)
{
	printf("f1 baslatildi\n");
	f2();
	printf("f1 sona erdi\n");
}

int main()
{
	printf("main baslatildi.\n");
	f1();
	printf("main sonlandirildi.\n");
}

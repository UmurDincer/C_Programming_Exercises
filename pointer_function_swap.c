#include"cumur.h"

int g1 = 10;
int g2 = 20;

int *f1(void)
{
	//code
	return &g1;
}

int *f2(void)
{
	//code
	return &g2;
}

int main()
{
	swap(f1(), f2());
	
	printf("g1 = %d\n", g1);
	printf("g2 = %d\n", g2);
}

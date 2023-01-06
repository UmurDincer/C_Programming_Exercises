#include<stdio.h>

int g;

void func()
{
	static int x = 10;
	int y = 10;

	printf("x = %d   y = %d\n", x, y);
	++x;
	++y;
}

int main()
{

	for (int i = 0; i < 10; ++i)
		func();
}
 


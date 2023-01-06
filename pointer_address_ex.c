#include<stdio.h>

int main()
{
	int a[10] = { 0, 1 ,2 ,3 ,4, 5, 6, 7, 8, 9 };
	int i;
	int *ptr = a;
	for(i = 0; i < 10; ++i)
	{
		printf("%d %d %d %d\n", a[i], *(a + i), i[a], *ptr);
		++ptr;
	}
}

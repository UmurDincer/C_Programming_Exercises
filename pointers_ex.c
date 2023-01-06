#include<stdio.h>

int main()
{
	int a[5] = { 1, 3 ,5 , 6 ,8};
	int *p = a;
	
	printf("&a[0] = %p\n", &a[0]);
	printf("a = %p\n", a);
	printf("p  = %p\n", p);
}

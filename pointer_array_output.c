#include<stdio.h>

int main()
{
	int a[10] = { 0, 1 ,2 ,3 ,4, 5, 6, 7, 8, 9 };
	int *ptr = a + 5;
	int i;
	
	printf("%d\n",*ptr);
	printf("%d\n" ,ptr[0]);
	printf("%d\n" ,ptr[3]);
	printf("%d\n" ,ptr[-3]);	
	
}

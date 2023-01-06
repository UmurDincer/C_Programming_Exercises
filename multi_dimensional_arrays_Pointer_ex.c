#include<stdio.h>

int main()
{
	int a[5][4] = { 0 };
	int (*ptr)[4] = a;
	int i;
	
	for(i = 0; i < 5; ++i){
		printf("%p %p %p\n", &a[i], a + i, ptr);
		++ptr;
	}	
}
	


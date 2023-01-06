#include<stdio.h>

int main()
{
	int a[10][4];
	double b[10][32];
	int i, k;
	
	for(i = 0; i < 10; ++i){
		printf("%p %p\n", a + i, &a[i]);
	}
	printf("\n\n");
	
		for(i = 0; i < 10; ++i){
		printf("%p %p\n", b + i, &b[i]);
	}
	
}

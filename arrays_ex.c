#include<stdio.h>

#define   SIZE   10

int main()
{
	int a[SIZE];
	int i;
	for(i = 0; i< SIZE; ++i){
		a[i] = i;
	}
	
	for(i = 0 ; i < SIZE; ++i){
		printf("a[%d] = %d \n", i , a[i]);
	}
}

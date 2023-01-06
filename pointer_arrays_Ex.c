#include<stdio.h>
#include"cumur.h"
#define SIZE 100


void displayArray(const int *p, int size)
{
	int i;
	for(i = 0; i < size; ++i){
		if(i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	dline();
}

void setRandomArray(int *ptr, int size)
{
	while(size--){
		*ptr = rand() % 1000;
		++ptr;
	}
	
/*	int i;
	for(i = 0; i < size; ++i){
		ptr[i] = rand() % SIZE;
	}*/
}
int main()
{
	int a[SIZE];
	randomize();
	setRandomArray(a, SIZE);
	displayArray(a , SIZE);
	printf("\n\n");
	displayArray(a+ 5, 3); 

}

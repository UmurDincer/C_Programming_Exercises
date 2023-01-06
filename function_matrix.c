#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>


/*void set_matrix_20(int(*p)[20], size_t size)
{
	int i, k;
	for(i = 0; i < size; ++i){
		for(k = 0; k < 20; ++k){
			p[i][k] = rand() % 10;
		}
	}	
} */
void set_matrix_20(int(*p)[20], size_t size)
{
	int i;
	while(size--){
		for(i = 0; i < 20; ++i)
			(*p)[i]=rand() % 10;
		++p;
	}
}
/*
void print_matrix(const int(*p)[20], size_t size)
{
	int i;
	while(size--){
		for(i = 0; i < 20; ++i)
			printf("%d ", (*p)[i]);
		++p;
		printf("\n");
	}
}
*/
void print_matrix(const int(*p)[20], size_t size)
{
	int i, k;
	for(i = 0; i < size; ++i){
		for(k = 0; k < 20; ++k)
			printf("%d ", p[i][k]);
		printf("\n");
	}
}


int main()
{
	int a[10][20];
	int b[4][20];	
	randomize();
	set_matrix_20(a, 10);
	set_matrix_20(b, 4);
	print_matrix(a, 10);
	printf("\n******************************\n");
	print_matrix(b, 4);
	
}

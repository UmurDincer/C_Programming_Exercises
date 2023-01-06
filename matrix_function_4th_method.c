#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>

void set_matrix(void *ptr, size_t row, size_t col)
{
	int *p = ptr;
	int i, k;
	for(i = 0; i < row; ++i){
		for(k = 0; k < col; ++k){
			p[i * col + k] = rand() % 10;
		}
	}
}
void print_matrix(const void *ptr, size_t row, size_t col)
{
	const int *p = ptr;
	int i, k;
	for(i = 0; i < row; ++i){
		for(k = 0; k < col; ++k){
			printf("%d ", p[i * col + k]);
		}
		printf("\n");
	}
	
	dline();
	
	
}

int main()
{
	int a[5][10];
	int b[7][16];
	int c[10][20];
	int d[12][40];
	
	randomize();
	
	//set_matrix(&a[0][0], 5, 10);
	//set_matrix(a[0], 5, 10);
	set_matrix(a , 5, 10);//üstte ki ifadeler ile ayný anlama gelir
	print_matrix(a, 5, 10);
	
	set_matrix(b , 7, 16);
	print_matrix(b, 7, 16);

	set_matrix(c , 10, 20);
	print_matrix(c, 10, 20);
	
	set_matrix(d , 12, 40);
	print_matrix(d, 12, 40);
	
	

	

	
	
}

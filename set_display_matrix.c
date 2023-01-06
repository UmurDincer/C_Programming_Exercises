#include<stdio.h>
#include<stdlib.h>
#include"cumur.h"
#include<time.h>

void set_matrix_20(int(*p)[20], int size)
{
	int i, k;
	for(i = 0; i < size; ++i){
		for(k = 0; k < 20; ++k)
			p[i][k] = rand() % 10;
			
	}
}

void display_matrix_20(const int(*p)[20], int size){
	int i, k;
	for(i = 0; i < size; ++i){
		for(k = 0; k < 20; ++k)
			printf("%d", p[i][k]);
		printf("\n");			
	}
	dline();
}

int main()
{
	int a[10][20];
	
	randomize();
	set_matrix_20(a, 10);
	display_matrix_20(a, 10);
}

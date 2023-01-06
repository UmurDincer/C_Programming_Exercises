#include<stdio.h>

int main()
{
	int a[5][4] = {
		{1,1,1,1},
		{2,2,2,2},
		{3,3,3,3},
		{4,4,4,4},
		{5,5,5,5},
	};
	int b[5][4] = {
		{1,1,1},
		{2,2},
		{3,3,3},
		{4,4,4,4},
		{5},
	};
	
	int c[5][4] = {
		[2] = {12,26,59,18},
		[4] = {59,89,24,36},
		};
		
	int d[5][4] = {5,7,3,6,7,6,2,9,45,65,62,15,23,41,2,8};
	
	int i, k; 
	
	printf("a:\n");
	for(i = 0; i < 5; ++i){
		for(k = 0; k < 4; ++k){
			printf("%d ", a[i][k]);
		}
		printf("\n");
	}
	
	printf("\nb:\n");
	
	for(i = 0; i < 5; ++i){
		for(k = 0; k < 4; ++k){
			printf("%d ", b[i][k]);
		}
		printf("\n");
	}
	
		printf("\nc:\n");
	
	for(i = 0; i < 5; ++i){
		for(k = 0; k < 4; ++k){
			printf("%d ", c[i][k]);
		}
		printf("\n");
	}
	
		printf("\nd:\n");
	
	for(i = 0; i < 5; ++i){
		for(k = 0; k < 4; ++k){
			printf("%d ", d[i][k]);
		}
		printf("\n");
	}
	

}

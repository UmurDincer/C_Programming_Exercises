#include<stdio.h>
#include"cumur.h"

#define SIZE 20

void get_min_max(const int *pa, size_t size, int **pmin, int **pmax)
{
	*pmin = *pmax = (int *)pa;
	size_t i;
	
	for(i = 1; i < size; ++i){
		if(pa[i] > **pmax){
			*pmax = (int *)(pa + i);
		}
		else if(pa[i] < **pmin){
			*pmin =(int *)(pa + i);			
		}
	}
	
}

int main()
{
	int a[SIZE];
	int *ptr_min, *ptr_max;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	get_min_max(a, SIZE, &ptr_min, &ptr_max);
	
	
	printf("min = %d ve dizinin %d indisli elemani \n", *ptr_min, ptr_min - a);
	printf("max = %d ve dizinin %d indisli elemani \n", *ptr_max, ptr_max - a);

	swap(ptr_max, ptr_min);
	
	display_array(a, SIZE);
}

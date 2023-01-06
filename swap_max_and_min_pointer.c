#include"cumur.h"
#include<stdlib.h>

#define SIZE 20

int *get_array_max(const int *p, size_t size)
{
	const int *pmax = p;
	size_t i;
	for( i = 0; i < size; ++i){
		if(p[i] > *pmax)
			pmax = p + i;
	}
	
	return (int *)pmax;

}


int *get_array_min(const int *p, size_t size)
{
	const int *pmin = p;
	size_t i;
	for( i = 1; i < size; ++i){
		if(p[i] < *pmin)
			pmin = p + i;
	}
	
	return (int *)pmin;

}

int main()
{
	int a[SIZE];
	int *pmax;
	int *pmin;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	swap(get_array_min(a, SIZE), get_array_max(a, SIZE));
	display_array(a, SIZE);

}

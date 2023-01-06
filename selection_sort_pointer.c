#include"cumur.h"
#include<stdlib.h>

#define SIZE 20


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

void selection_sort(int *p, size_t size)
{
	size_t i;
	for(i=0; i < size - 1; ++i){
	swap(get_array_min(p+i, size-i), p + i);
	}
}

int main()
{
	int a[SIZE];

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	selection_sort(a, SIZE);
	display_array(a, SIZE);

}

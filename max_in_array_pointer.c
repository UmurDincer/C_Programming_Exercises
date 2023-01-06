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

int main()
{
	int a[SIZE];
	int *pmax;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	pmax = get_array_max (a, SIZE);
	printf("max = %d dizisinin %d indisli elemani\n", *pmax, pmax - a);
	
	*pmax = -1; // fill the index with -1 and max will be changed
	display_array(a, SIZE);
	
	pmax = get_array_max(a, SIZE);
	printf("max = %d dizisinin %d indisli elemani\n", *pmax, pmax - a);
}

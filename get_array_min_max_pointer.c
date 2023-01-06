#include <stdio.h>
#include"cumur.h"

#define SIZE 100
void get_array_min_max(const int *p,int size, int *pmin, int *pmax)
{
	*pmin = *pmax = *p;
	int i;
	for(i = 1; i < size; ++i){
		if(p[i] < *pmin)
			*pmin = p[i];
		else if(p[i] > *pmax)
			*pmax = p[i];
	}
}
int main()
{
	int a[SIZE];
	int min, max;
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	get_array_min_max(a, SIZE, &min, &max);

	printf("min = %d\nmax = %d\n", min, max);
}

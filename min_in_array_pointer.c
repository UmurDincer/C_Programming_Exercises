#include <stdio.h>
#include"cumur.h"

#define SIZE 100

int get_array_min(const int *p, int size)
{	
	int i;
	int min = p[0];
	for(i = 1; i < size; ++i)
	{
		if(p[i] < min)
			min = p[i];
	}
	
	return min;
}

int main()
{
	int a[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	printf("min = %d\n", get_array_min(a,SIZE));
}

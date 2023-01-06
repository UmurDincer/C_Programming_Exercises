#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include"cumur.h"
#define SIZE 10

/*int sum_array(const int *p, int size)
{
	int sum = 0;
	int i;
	
	for(i = 0; i < size; ++i)
		sum+=p[i];
	
	return sum;
}*/

int sum_array(const int *p, int size)
{
	int sum = 0;
	
	while(size--)
		sum += *p++;
		
	return sum;
}

double get_mean(const int *p, int size)
{
	return (double)sum_array(p, size) / size;
}

double get_std_dev(const int *p, int size)
{
	double mean = get_mean(p, size);
	double sum = 0.;
	int i;
	
	for(i = 0; i < size; ++i)
		sum +=(p[i]-mean) * (p[i] - mean);
		
	return sqrt(sum / size);
}

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a , SIZE);
	printf("\n\n");
	printf("sum = %d\n", sum_array(a, SIZE));
	printf("mean = %f\n", get_mean(a, SIZE));
	printf("std deviation = %f\n", get_std_dev(a, SIZE));
}

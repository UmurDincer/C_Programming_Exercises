#include "cumur.h"
#include<math.h>

#define SIZE 100
// standard deviation ? 
int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);
	
	int sum = 0;
	double mean;
	double sum_square = 0;
	int i;
	double std_dev;
	for(i = 0; i < SIZE; ++i){
		sum+=a[i];
	}
	
	mean = (double)sum / SIZE;
		
	for(i = 0; i < SIZE; ++i){
		sum_square += (a[i] - mean) * (a[i] - mean);
	}
	
	std_dev = sqrt(sum_square / SIZE);
	
	printf("standard deviation is %f\n", std_dev);
}

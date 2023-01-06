#include "cumur.h"

#define SIZE 20
// find runner up which is second max number.
int main()
{
	int a[SIZE];
	int max, runner_up;
	
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);

	max = a[0];
	runner_up = a[1];
	
	if(a[1] > a[0]){
		max = a[1];
		runner_up = a[0];
	}
	
	int i;
	for(i = 2; i < SIZE; ++i){
		if(a[i] > max){
			runner_up = max;
			max=a[i];
		}
		else if (a[i]> runner_up){
			runner_up = a[i];
		}
	}
	
	printf("runner_up = %d\n", runner_up);

}

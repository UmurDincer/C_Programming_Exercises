#include "cumur.h"

#define SIZE 20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);

	int max = a[0];
	int i;
	
	for(i = 1; i < SIZE; ++i){
		if(a[i] > max){
			max = a[i];
		}
	}
	
	printf("max = %d \n", max);

}



#include "cumur.h"

#define SIZE 20
 //find the max number and the index of the max number.
int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);

	int max = a[0];
	int i;
	int max_indx = 0;
	
	for(i = 1; i < SIZE; ++i){
		if(a[i] > max){
			max = a[i];
			max_indx = i;
		}
	}
	
	printf("max = %d array's index is %d\n", max, max_indx);

}



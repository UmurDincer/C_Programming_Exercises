#include "cumur.h"

#define SIZE 10
//reverse algorithm

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);
	
	int temp;
	int i;
	
	for(i = 0; i < SIZE / 2; ++i){
		temp = a[i];
		a[i] = a[SIZE - 1 - i];
		a[SIZE - 1 - i] = temp; 
	}
	
	display_array(a, SIZE);
	
}

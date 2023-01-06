 #include "cumur.h"

#define SIZE 100

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);
	
	int odd_sum = 0;
	int counter = 0;
	int i;
	
	for (i = 0; i < SIZE; ++i){
		if(a[i] % 2 != 0){
			odd_sum += a[i];
			++counter;
		}
	} 
	if(counter != 0)
		printf("average of odd numbers is %f\n", (double)odd_sum/counter);
	else
		printf("there is no odd element in this array\n");
	
}

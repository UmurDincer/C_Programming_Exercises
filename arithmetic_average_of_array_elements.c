 #include "cumur.h"

#define SIZE 100

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a , SIZE);
	display_array(a, SIZE);
	
	int sum = 0;
	int i;
	
	for(i = 0; i < SIZE; ++i){
		sum+=a[i];
	}
	
	printf("average = %f\n", (double)sum/SIZE);
	
}

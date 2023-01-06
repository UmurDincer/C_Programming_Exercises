#include "cumur.h"
#include<conio.h>

#define SIZE 10

int main()
{
	int a[SIZE];
	int b[SIZE];
	int c[2 * SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	set_random_array(b, SIZE);
	sort(a, SIZE);
	sort(b, SIZE);
	display_array(a, SIZE);
	display_array(b, SIZE);
	
	int idx_a = 0;
	int idx_b = 0;
	int i;
	
	for(i = 0; i < 2 * SIZE; ++i){
		if(idx_a == SIZE)
			c[i] = b[idx_b++];
		else if(idx_b == SIZE)
			c[i] = a[idx_a++];
		else if(a[idx_a] < b[idx_b])
			c[i] = a[idx_a++];
		else
			c[i] = b[idx_b++];
	}
	
	display_array(c, 2 * SIZE);
}

#include "cumur.h"

#define SIZE 10

int main()
{
	int a[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	int i;
	int k;
	int temp;
	for(i = 0; i < SIZE - 1; ++i){
		for(k = 0; k < SIZE -1 -i; ++k){
			if(a[k] % 2 == 0 && a[k + 1] % 2 !=0 ||  a[k] % 2 == a[k+1]% 2 && a[k] > a[k+1]){
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
	display_array(a, SIZE);
}

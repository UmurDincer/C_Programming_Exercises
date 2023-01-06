#include <stdio.h>
#include"cumur.h"

#define SIZE 20

void bsort(int *p, int size)
{
	int i;
	int k;

	for(i = 0; i < size - 1; ++i){
		for(k = 0; k < size -1 - i; ++k){
			if(p[k] > p[k + 1]){
				swap(p + k, p + k + 1);
			}
		}
	}
}

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	bsort(a, SIZE);
	display_array(a, SIZE);


}

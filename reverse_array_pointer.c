#include <stdio.h>
#include"cumur.h"

#define SIZE 20

/*void reverse_array(int *p, int size)
{
	int i;
	for(i = 0; i < size / 2; ++i){
		int temp = p[i];
		p[i] = p[size - 1 - i];
		p[size - 1 - i] = temp;
	}
}*/

void reverse_array(int *p, int size)
{
	int i;
	for(i = 0; i < size / 2; ++i){
		swap(p + i, p + size -1 - i);
	}
}

int main()
{
	int a[SIZE];
	int min, max;
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	reverse_array(a, SIZE);
	display_array(a, SIZE);
}

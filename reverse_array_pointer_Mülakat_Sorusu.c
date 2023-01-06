#include"cumur.h"
#include<inttypes.h>
#define SIZE 100

void  reverse_array(int *p, size_t size)
{
	int *pe = p + size;
	
	while(p < pe)
		swap(p++, --pe);
}

int main()
{
	int a[SIZE];
	 randomize();
	 set_random_array(a, SIZE);
	 display_array(a,SIZE);
	 reverse_array(a, SIZE);
	 display_array(a, SIZE);
}

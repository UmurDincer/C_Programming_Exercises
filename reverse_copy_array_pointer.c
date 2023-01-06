#include"cumur.h"

#define SIZE 20

void reverse_copy_array(int *pdest, const int *psource, int n)
{
	psource +=n;
	
	while(n--)
		*pdest++ = *--psource;
}

int main()
{
	int a[SIZE];
	int b[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	reverse_copy_array(b, a, SIZE);
	display_array(b, SIZE);
}

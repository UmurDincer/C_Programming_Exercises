#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include"cumur.h"

#define SIZE 10
/* void copy_array(int *pdest, const int *psource, int n) 
{	
	int i;
	for(i = 0; i < n; ++i)
		pdest[i] = psource[i];
}

*/
void copy_array(int *pdest, const int *psource, int n)
{
	while(n--)
		*pdest++ = *psource++;
}

int main()
{
	int a[SIZE];
	int b[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	copy_array(b, a, SIZE);
	display_array(b, SIZE);
}

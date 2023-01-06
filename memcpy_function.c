#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

void *memcpy2(void *vpdest, const void *vpsource,size_t n)
{
	char *pdest = vpdest;
	const char *psource = vpsource;
	
	while(n--)
		*pdest++ = *psource++;
	return vpdest;
}

int main()
{
	int a[SIZE];
	int b[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
//	memcpy(b, a, sizeof(a));
	memcpy2(b, a, sizeof(a));
	
	display_array(b, SIZE);
}

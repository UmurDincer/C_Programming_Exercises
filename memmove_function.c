#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

void *memmove1(void *vpdest, const void *vpsource, size_t n)
{
	char *pdest = (char *)vpdest;
	const char *psource = (const char *)vpsource;
	
	if(pdest < psource){
		while(n--)
			*pdest++ = *psource++;
	}
	else{
		pdest += n;
		psource +=n;
		while(n--)
			*--pdest = *--psource;
	}
	
	return vpdest;
}

int main()
{
	
}

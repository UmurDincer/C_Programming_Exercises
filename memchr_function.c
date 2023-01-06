#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

void *memchr(const void *vp, int val, size_t n)
{
	const char *p = vp;
	
	while(n--){
		if(*p == val)
			return (char *)p;
		++p;
	}
	
	return NULL;
}

int main()
{
	
}

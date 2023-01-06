#include<stdio.h>

int main()
{
	int x = 1;
	
	if(*(char *)&x)
		printf("little endian\n");
	else
		printf("big endian\n");
}

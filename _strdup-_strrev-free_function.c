#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	char *p;
	
	printf("bir yazi girin: ");
	sgets(str);
	printf("(%s)\n", str);
	
	p = _strdup(str);
	_strrev(p);
	
	printf("(%s)  (%s)\n", str, p);	
	
	free(p);
	
}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

char * mystrdup(const char *p)
{
	char *pd = malloc(strlen(p) + 1);
	if(pd == NULL)
		return NULL;

	strcpy(pd, p);
	
	return pd;
}

int main()
{
	char str[SIZE];
	char *p;
	
	printf("bir yazi girin: ");
	sgets(str);
	printf("(%s)\n", str);
	
	p = mystrdup(str);
	_strrev(p);
	
	printf("(%s)  (%s)\n", str, p);	
	
	free(p);
	
}

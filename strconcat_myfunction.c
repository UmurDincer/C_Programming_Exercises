#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

char* strconcat(const char *p1, const char *p2)
{
	char *pd = (char*)malloc(strlen(p1) + strlen(p2) + 1);
	if(!pd)
		return pd;
	
	strcpy(pd, p1);
	strcat(pd, p2);
	
	return pd;
}

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char *ptr;
	
	printf("birinci yazisiyi girin: ");
	sgets(s1);
	printf("ikinci yazisiyi girin: ");
	sgets(s2);
	
	printf("(%s)  (%s)\n", s1, s2);
	
	ptr = strconcat(s1, s2);
	printf("(%s) + (%s) = (%s)\n", s1, s2, ptr);
	_strrev(ptr);
	printf("(%s) + (%s) = (%s)\n", s1, s2, ptr);
	
	free(ptr);
	
}

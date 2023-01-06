#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

char *strcpy(char *pdest, const char * psource)
{
	char *p = pdest;
	
	while(*pdest++ = *psource++)
		;
	
	return p;
}

/*char *strcpy(char *pdest, const char * psource)
{
	char *p = pdest;
	
	while(*psource != '\0'){
		*pdest = *psource;
		++pdest;
		++psource;
	}
	
	*pdest = '\0';

	return p;
}*/

int main()
{
	char source[SIZE];
	char dest[SIZE];
	
	printf("bir isim girin: ");
	scanf("%s", source);
	
	strcpy(dest, source);
	
	printf("(%s) (%s)\n", source, dest);
}

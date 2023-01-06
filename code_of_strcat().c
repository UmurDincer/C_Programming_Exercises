#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100
/*
char *strcat1(char *pdest, const char *psource)
{
	char *ptemp = pdest;
	
	while(*pdest)
		++pdest;
	while(*pdest++ = *psource++)
		;
	
	return ptemp;
	
}
*/

/*
char *strcat2(char *pdest, const char *psource)
{
	strcpy(pdest + strlen(pdest), psource);
	return pdest;
}	*/

char *strcat3(char *pdest, const char *psource)
{
	strcpy(strchr(pdest, '\0'), psource);
	
	return pdest;
}


int main()
{
	char s1[SIZE];
	char s2[SIZE];
	
	printf("iki isim giriniz: ");
	scanf("%s%s", s1, s2);
	
//	strcat(s1, s2);
//	strcat1(s1, s2);
//	strcat2(s1, s2);	
	strcat3(s1, s2);


	puts(s1);
}

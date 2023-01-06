#include<stdio.h>
#include<string.h>
#include"cumur.h"
#include<ctype.h>

#define SIZE 100

int stricmp1(const char *p1, const char *p2)
{
	while(toupper(*p1) == toupper(*p2)){
		if(*p1 == '\0')
			return 0;
			
		++p1;
		++p2;
	}
	
	return toupper(*p1) - toupper(*p2);
}

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	int result;
	
	printf("iki isim giriniz :");
	scanf("%s%s", s1, s2);
	
	result = stricmp1(s1, s2);
	
	if(result > 0)
		printf("%s > %s\n", s1, s2);
	else if( result < 0)
		printf("%s > %s\n", s2, s1);
	else
		printf("%s = %s\n", s1, s2);
}

#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int strcmp1(const char *p1, const char *p2)
{
	while(*p1 == *p2){
		if(*p1 == '\0')
			return 0;
			
		++p1;
		++p2;
	}
	
	return *p1 - *p2;
}

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	int result;
	
	printf("iki isim giriniz :");
	scanf("%s%s", s1, s2);
	
	result = strcmp1(s1, s2);
	
	if(result > 0)
		printf("%s > %s\n", s1, s2);
	else if( result < 0)
		printf("%s > %s\n", s2, s1);
	else
		printf("%s = %s\n", s1, s2);
}

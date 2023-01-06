#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	int result;
	
	printf("iki isim giriniz :");
	scanf("%s%s", s1, s2);
	
	result = strcmp(s1, s2);
	
	if(result > 0)
		printf("%s > %s\n", s1, s2);
	else if( result < 0)
		printf("%s > %s\n", s2, s1);
	else
		printf("%s = %s\n", s1, s2);
}

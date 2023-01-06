#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	
	printf("iki isim giriniz: ");
	scanf("%s%s", s1, s2);
	
	strcat(s1, s2);
	
//	printf("%s ", s1);
	puts(s1);
}

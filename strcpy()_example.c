#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define		 SIZE		 100

int main()
{
	char s1[SIZE];
	char s2[SIZE]; 
	char s3[SIZE];

	printf("iki isim girin: ");
	scanf("%s%s", s1, s2);
	strcpy(s3, s1);
	strcpy(s3 + strlen(s3), s2);
	
	printf("(%s) + (%s) = (%s)\n", s1, s2, s3);	
	
}

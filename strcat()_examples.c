#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	char s1[SIZE] = "ahmet";
	char s2[SIZE] = "taylan";
	char s3[SIZE] = "aleyna";	
	
	str[0] = '\0';
	
	strcat(strcat(strcat(str, s1), s2), s3);
	
	printf("(%s) \n", str);
	

	
	

	
	
}

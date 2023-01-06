#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char source[SIZE];
	char dest[SIZE];
	
	printf("bir isim girin: ");
	scanf("%s", source);
	
	strcpy(dest, source);
	
	printf("(%s) (%s)\n", source, dest);
}

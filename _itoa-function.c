#include<stdlib.h>
#include"cumur.h"
#include<stdio.h>

#define SIZE 100

int main()
{
	int ival;
	char str[SIZE];
	printf("bir tam sayi girin: ");
	scanf("%d", &ival);
	
	_itoa(ival, str, 16);
	printf("%d degeri 16lik sayi sisteminde yaziya cevrilerek (%s) olur.\n", ival, str);
	
	_itoa(ival, str, 10);
	printf("%d degeri 10luk sayi sisteminde yaziya cevrilerek (%s) olur.\n", ival, str);
	
	_itoa(ival, str, 2);
	printf("%d degeri 2lik sayi sisteminde yaziya cevrilerek (%s) olur.\n", ival, str);
}


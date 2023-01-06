#include<stdlib.h>
#include"cumur.h"
#include<stdio.h>

#define SIZE 100

char *my_itoa(char *pbuf, int val){
	return _itoa(val, pbuf, 10);
}

int main()
{
	int ival;
	char str[SIZE];
	printf("bir tam sayi girin: ");
	scanf("%d", &ival);
	

	
	my_itoa(str, ival);
	printf("(%d) yaziya cevirilir (%s) olur.\n", ival, str);
	
	
}


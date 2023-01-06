#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	int c;
	char *ptr;
	
	printf("br yazi girin: ");
	sgets(str);
	printf("aranacak karakteri girin: ");
	c = getchar();

	
	if((ptr = strchr(str, c)) != NULL){
		printf("strchr: bulundu... dizinin %d indisli elemani\n", ptr - str);
		*ptr = '!';
		
	}
	else
		printf("bulunamadi\n");
		
	if((ptr = strrchr(str, c)) != NULL){
		printf("strrchr: bulundu... dizinin %d indisli elemani\n", ptr - str);
		*ptr = '?';
		
	}
	else
		printf("bulunamadi\n");
	
	puts(str);
}

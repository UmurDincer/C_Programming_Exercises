#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

char * strrchr1(char *ptr, int c)
{
char *p = NULL;
	
	while(*ptr){
		if(*ptr == c)
			p = ptr;
		++ptr;
	}
	
	if(c == '\0')
		return (char *)ptr;
	
	
	return p;
	
}

int main()
{
	char str[SIZE];
	int c;
	char *ptr;
	
	printf("br yazi girin: ");
	sgets(str);
	printf("aranacak karakteri girin: ");
	c = getchar();
	
	if((ptr = strrchr(str, c)) != NULL){
		printf("strrchr: bulundu... dizinin %d indisli elemani\n", ptr - str);
		*ptr = '?';
		
	}
	else
		printf("bulunamadi\n");
	
	puts(str);
}

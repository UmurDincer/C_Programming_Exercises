#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	const char str[] = "xwqjp"; 
	char s[SIZE];
	char *ptr;
	
	printf("bir yazi girin: ");
	sgets(s);
	
	ptr = strpbrk(s, str);
	
	if(ptr != NULL){
		printf("bulunud ... idx = %d\n", ptr - s);
	}
	else
		printf("bulunamadi \n");
	
}

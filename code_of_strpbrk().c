#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

char *strpbrk1(const char *pstr, const char *pc)
{
	int i;
	
	for(i = 0; pstr[i] != '\0'; ++i){
		if(strchr(pc, pstr[i]))
			return (char*)(pstr + i);
	}
	
	return NULL;
}

int main()
{
	const char str[] = "xwqjp"; 
	char s[SIZE];
	char *ptr;
	
	printf("bir yazi girin: ");
	sgets(s);
	
	ptr = strpbrk1(s, str);
	
	if(ptr != NULL){
		printf("bulunud ... idx = %d\n", ptr - s);
	}
	else
		printf("bulunamadi \n");
	
}

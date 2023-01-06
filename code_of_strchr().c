#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

char *strchr1(const char *p, int c)
{
	while (*p) {
		if (*p == c)
			return (char *)p;
		++p;
	}
	
	if(c == '\0')
		return (char *)p;
	return NULL;
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
//	ptr = strchr(str, c);
	ptr = strchr1(str, c);
	
	if(ptr){
		printf("bulundu... dizinin %d indisli elemani\n", ptr - str);
		*ptr = '!';
		puts(str);
	}
	else
		printf("bulunamadi\n");
	
//	ptr = strchr(str, '\0');
	ptr = strchr1(str, '\0');
	*ptr++ = '*';
	*ptr = '\0';
	puts(str);
}

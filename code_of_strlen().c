#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

size_t strlen1(const char *p)
{
	size_t len = 0;
	
	while(*p++ != '\0'){
		
		++len;
	}
	
	return len;
}

size_t strlen2(const char *p)
{
	const char *ptemp = p;
	
	while(*p != '\0')
		++p;
		
	return (size_t)(p - ptemp);
}

int main()
{
	char str[SIZE];
	size_t len;
	
	printf("bir yazi girin: ");
	sgets(str);
//	len = strlen(str);
//	len = strlen1(str);
	len = strlen2(str);
	printf("uzunluk: %zu\n", len);
	

}

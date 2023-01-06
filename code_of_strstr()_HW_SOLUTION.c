#include<string.h>
#include<stdio.h>
#include"cumur.h"

#define SIZE 100

char *mystrstr(const char *str, const char *substr)
{
	for(; *str; ++str){
		const char *p1 = str, *p2 = substr;
		for(; *p1 && *p2 && ( *p1 == *p2); ++p1, ++p2)
			;
		if(!*p2)
			return (char *)str;
	}
	return NULL;
}

int main()
{
	char s[SIZE];
	char *p;
	
	printf("bir yazi giriniz: ");
	sgets(s);
	printf("[%s] \n", s);
	
	if((p = mystrstr(s, "umur")) != NULL){
		printf("bulundu: (%d) (%s)\n", p - s, p);
	}
	else
		printf("bulunamadi\n");
}


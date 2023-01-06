#include<stdio.h>
#include"cumur.h"

#define SIZE 100

void myputs(const char *p)
{
	while(*p){
		putchar(*p++);
	}
	putchar('\n');
}

int main()
{
	char str[SIZE];
	
	printf("bir yazi girin: ");
	sgets(str);
	puts(str);
	myputs(str);
}

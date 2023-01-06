#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define		 SIZE		 100

int main()
{
	char str[SIZE] = "gulden"; 
	// 
	memmove(str+3, str, strlen(str) + 1);
	
	puts(str);
	
	
}

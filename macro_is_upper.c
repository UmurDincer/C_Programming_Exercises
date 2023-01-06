#include<stdio.h>

#define is_upper(c)  ((c) >= 'A' && (c) <= 'Z')

int main()
{
	int ch;
	printf("enter a character: \n");
	ch = getchar();
	
	if(is_upper(ch))	
		printf("yes, it is a capital letter.\n");
	else
		printf("no, it is not a capital letter.\n");
}

#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

void rputs(const char *p)
{
	int i;
	for(i = (int) (strlen(p) - 1); i >= 0; --i)
		putchar( p[i] );
		
	putchar('\n');
}

int main()
{
	char str[SIZE];
	size_t len;
	
	printf("bir yazi girin: ");
	sgets(str);
	puts(str);
	rputs(str);
	

}

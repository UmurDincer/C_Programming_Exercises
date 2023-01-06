#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	int i;
	
	printf("enter a string: ");
	sgets(str);
	
	printf("%s\n", str);
	
	for(i=0; str[i] != '\0'; ++i)
		;
	--i;
	
	for(; i >= 0; --i)
		putchar(str[i]);
		
	putchar('\n');
	
	
}

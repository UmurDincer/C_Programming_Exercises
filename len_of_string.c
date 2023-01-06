#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	int len=0;
	int i;
	
	printf("enter a string: ");
	sgets(str);
	
	for(i=0; str[i] != '\0'; ++i)
		++len;
		
	printf("length of [%s] string is %d\n", str, len);
}

#include"cumur.h"
#include<ctype.h>
#define SIZE 100

int main()
{
	char str[SIZE];
	int i;
	int c;
	int count = 0;
	
	printf("enter a string: ");
	sgets(str);
	
	
	printf("enter the character you want to count: ");
	c = getchar();
	
	for(i=0; str[i] != '\0'; ++i){
		if(toupper(str[i]) == toupper(c))
			++count;
	}
	
	printf("in string [%s], there are [%d] [%c] character.\n ", str, count, c);
		
		
	
}

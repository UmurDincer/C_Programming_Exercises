#include <ctype.h>
#include"cumur.h"

#define SIZE 500

int main()
{
	char source[SIZE];
	char dest[SIZE];
	int c;
	int i;
	int write_idx = 0;
	
	printf("enter a writing: ");
	sgets(source);
	printf("enter a character: ");
	c = getchar();
	
	for(i = 0; source[i] != '\0'; ++i){
		if(source[i] != c)
			dest[write_idx++] = source[i];
	}
	
	dest[write_idx]= '\0';
	
	printf("[%s]\n", dest);
	
	
}

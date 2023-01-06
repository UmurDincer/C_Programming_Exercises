#include<ctype.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char source[SIZE];
	int c;
	int write_idx;
	int i;
	
	printf("enter a writing: ");
	sgets(source);

	
	for(i=0; source[i] != '\0'; ++i){
		if(!isdigit(source[i]))
			source[write_idx++] = source[i];
	}
	
	source[write_idx] = '\0';
	
printf("[%s] \n", source);
	
}

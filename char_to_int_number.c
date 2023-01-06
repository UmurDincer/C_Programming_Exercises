#include<ctype.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	int ival;  
	int i;
	
	printf("enter a writing: ");
	scanf("%s", str);
	
	printf("[%s]\n", str);
	
	for(i=0; str[i] != '\0'; ++i){
		printf("%d\n", str[i] - '0');
	}

}


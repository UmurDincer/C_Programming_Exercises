#include<ctype.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	int ival;  
	int i;
	
	printf("enter a decimal: ");
	scanf("%s", str);
	
	printf("[%s]\n", str);
	
	for(i=0; str[i] != '\0'; ++i){
		ival = ival * 10 +str[i] - '0';
	}
	
	printf("ival = %d\n", ival);

}


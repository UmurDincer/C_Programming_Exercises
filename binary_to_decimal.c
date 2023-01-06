#include<ctype.h>
#include"cumur.h"

#define SIZE 100
// negative sayý girdiðinde de dogru output
//verecek sekilde kodu modifiye et.
// 
int main()
{
	char str[SIZE];
	int ival;  
	int i;
	
	printf("enter a binary: ");
	scanf("%s", str);
	
	printf("[%s]\n", str);
	
	for(i=0; str[i] != '\0'; ++i){
		ival = ival * 2 +str[i] - '0';
	}
	
	printf("ival = %d\n", ival);

}


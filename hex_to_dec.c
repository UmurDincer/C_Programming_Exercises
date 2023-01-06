#include<ctype.h>
#include"cumur.h"

#define SIZE 100
// negative sayý girdiðinde de dogru output
//verecek sekilde kodu modifiye et.
// 
int main()
{
	char str[SIZE];
	int ival = 0;  
	int i;
	
	printf("enter a hex: ");
	scanf("%s", str);
	
	printf("[%s]\n", str);
	
	for(i=0; str[i] != '\0'; ++i){
		if(isdigit(str[i]))
			ival = ival * 16 +str[i] - '0';
		else if(isxdigit(str[i]))
			ival=ival*16 + toupper(str[i])- 'A' + 10 ;
	}
	
	printf("ival = %d\n", ival);

}


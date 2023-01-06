#include"cumur.h"

#define SIZE 100

int main()
{
	char str[SIZE];
	int len=0;

	
	printf("enter a string: ");
	sgets(str);
	
	for(len=0; str[len] != '\0'; ++len)
		; // null statement
	
	int i;	
	for (i = 0; i < len / 2; ++i){
		char temp = str[i];
		str[i] = str[len -1 -i];
		str[len - 1 - i] = temp;
	}

	printf("[%s]\n", str);
}

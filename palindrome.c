#include"cumur.h"

#define SIZE 500

int main()
{
	char str[SIZE];
	char temp[SIZE];
	int i;
	int idx = 0;
	
	printf("enter the writing: ");
	sgets(str);
	
	for(i = 0; str[i] != '\0'; ++i){
		if(isalpha(str[i])){
			temp[idx++] = str[i];
		}
	}
	
	int k;
	
	for(k=0; k < idx / 2; ++k){
		if(temp[k] != temp[idx - 1 -k])
			break;
	}
	
	if(k < idx/2)
		printf("it is not a palindrome!\n");
	else
		printf("it is a palindrome!\n");
}

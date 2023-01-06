#include"cumur.h"
#include<ctype.h>
#define SIZE 100

//ASCII

int main()
{
	char str[SIZE];
	int counts[26] = { 0 };
	int i;
	
	printf("enter a string: ");
	sgets(str);
	
	for (i = 0; str[i] != '\0'; ++i){
		if(isalpha(str[i])){
			++counts[toupper(str[i])-'A'];
		}
	}

	for(i = 0; i < 26; ++i){
		if(counts[i] != 0){
			printf("%c  %d\n", 'A' + i, counts[i]);
		}
	}
}

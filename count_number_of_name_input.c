#include"cumur.h"
#include<ctype.h>

#define SIZE 		500
#define OUTWORD 	0
#define INWORD		1

int main()
{
	char str[SIZE];
	int wordflag = OUTWORD;
	int word_count = 0;
	int i;
	
	printf("bir yazi girin: ");
	sgets(str);
	printf("[%s]\n", str);
	
	for(i = 0; str[i] != '\0';++i){
		if(isspace(str[i])){
			wordflag = OUTWORD;
		}
		else if(wordflag == OUTWORD) // yeni bir kelime girisi
		{
			++word_count;
			wordflag = INWORD;
		}
	}
	
		printf("toplam %d kelime\n", word_count);
}

#include<stdio.h>
#include"cumur.h"
#include<string.h>

int main()
{
	const char * const pmons[] ={
	"Ocak",
	"Subat",
	"Mart",
	"Nisan",
	"Mayis",
	"Haziran",
	"Temmuz",
	"Agustos",
	"Eylul",
	"Ekim",
	"Kasim",
	"Aralik"	
	};
	
	char entry[40];
	int i;	
	printf("bir ay ismi giriniz: ");
	scanf("%s", entry);
	
	for(i = 0; i < 12 && strcmp(pmons[i], entry); ++i)
		;
		

	if(i == 12)
		printf("%s gecerli bir ay ismi degil!\n", entry);
	else
		printf("%s yilin %d. ayi.\n", entry, i + 1);
}

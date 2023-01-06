#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "cumur.h"
#include<string.h>

//�yle bir yap� olu�turun ki bir fonksiyonu ismiyle �a��rabilelim
//�a��r�lacak fonksiyonun ismi �al��ma zaman�nda standart giri� 
//ak�m�ndan al�nacak.

typedef int(*FCTEST)(int);



int main()
{
	const FCTEST fa[] = { isupper, islower, isalpha, isdigit, isalnum, 
				isxdigit, isspace, ispunct, isblank, isprint,
				isgraph, iscntrl};
	const char *pfnames[] = {"isupper", "islower", "isalpha", "isdigit", "isalnum", 
				"isxdigit", "isspace", "ispunct", "isblank", "isprint",
				"isgraph", "iscntrl"};
	
	char name_entry[40];
	int ch;
	size_t i;
	printf("bir karakter girin: ");
	ch = getchar();
	printf("fonksiyon ismi: ");
	scanf("%s", name_entry);
	
	for(i = 0; i < asize(pfnames); ++i)
		if(!strcmp(name_entry, pfnames[i]))
			break;
	if(i == asize(pfnames)){
		printf("istenilen fonksiyon cagirilamiyor.\n");
	}
	else if(fa[i](ch))
		printf("%c karakteri icin %s testi sonucu ok\n", ch, name_entry);
	else
		printf("%c karakteri icin %s testi sonucu not ok\n", ch, name_entry);		
				
}

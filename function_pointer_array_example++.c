#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "cumur.h"

//öyle bir yapý oluþturun ki bir fonksiyonu ismiyle çaðýrabilelim
//çaðýrýlacak fonksiyonun ismi çalýþma zamanýnda standart giriþ 
//akýmýndan alýnacak.

typedef int(*FCTEST)(int);



int main()
{
	const FCTEST fa[] = { isupper, islower, isalpha, isdigit, isalnum, 
				isxdigit, isspace, ispunct, isblank, isprint,
				isgraph, iscntrl};
	const char *pfnames[] = {"isupper", "islower", "isalpha", "isdigit", "isalnum", 
				"isxdigit", "isspace", "ispunct", "isblank", "isprint",
				"isgraph", "iscntrl"};
	int c;
	int i;
	printf("bir karater giriniz: ");
	c = getchar();
	for(i = 0; i < asize(fa); ++i){
		if(fa[i](c))
			printf("%s testi sonucu ok\n", pfnames[i]);
		else
			printf("%s testi sonucu not ok\n",pfnames[i]);
	}
	
				
}

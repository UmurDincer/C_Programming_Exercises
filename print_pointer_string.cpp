#include<stdio.h>
#include"cumur.h"
#include<string.h>

#define 	SIZE 	100
// en kýsa isimler sýrasý,
//isimler de kendi aralarýnda alfabetik sýrada.
int main()
{
	const char *p[] = {"umur", "ahmet", "ece", "tunc", "ali", 
	"selin", "mahmut", "berk", "sude", "kenan", "ata","sena", NULL};
	
	int i = 0;
	
	while(p[i])
		printf("%s\n", p[i++]);
		
}

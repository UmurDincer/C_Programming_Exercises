#include<stdio.h>
#include"cumur.h"
#include<string.h>

#define 	SIZE 	100
// en kýsa isimler sýrasý,
//isimler de kendi aralarýnda alfabetik sýrada.
int main()
{
	const char *p[] = {"umur", "ahmet", "ece", "tunc", "ali", 
	"selin", "mahmut", "berk", "sude", "kenan", "ata","sena"};
	
	size_t i;
	size_t k;
	
	for(i = 0; i < asize(p) - 1; ++i){
		for(k = 0; k < asize(p) - 1 - i; ++k){
			size_t len1 = strlen(p[k]);
			size_t len2 = strlen(p[k + 1]);
			if(len1 > len2 || (len1 == len2 && strcmp(p[k], p[k + 1]) > 0)) {
				const char *ptemp = p[k];
				p[k]= p[k + 1];
				p[k + 1] = ptemp;
			} 
			
		}
	}
	
	for(i = 0; i < asize(p); ++i){
		printf("%s ", p[i]);
	}
	
}

#include<stdio.h>
#include"cumur.h"
#include<string.h>

#define SIZE  12

void pswap(char **ptr1, char **ptr2){
	char *ptemp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = ptemp;
}

void print_names1(char **ptr, size_t size)
{
	size_t i;
	for(i = 0; i < size; ++i){
		printf("%s ", ptr[i]);
	}
	
	dline();
}

void print_names2(char **ptr, size_t size){
	while(size--)
		printf("%s ", *ptr++ );
	dline();
}

void sort_names(char **ptr, size_t size)
{
	size_t i;
	size_t k;
	
	for(i = 0; i < size - 1; ++i){
		for(k = 0; k < size - 1 - i; ++k){
			if(strcmp(ptr[k], ptr[k + 1]) > 0){
				pswap(ptr + k, ptr + k +1); 
			}
		}
	}
}

int main()
{
	char *p[] = {"umur", "ahmet", "ece", "tunc", "ali", 
	"selin", "mahmut", "berk", "sude", "kenan", "ata","sena"};
	
	
	print_names1(p, asize(p));
	sort_names(p, asize(p));
	print_names2(p, asize(p));
}

#include<stdio.h>
#include<string.h>
#include"cumur.h"

void swap_names(char *px, char *py)
{
	static char temp[20];
	
	strcpy(temp, px);
	strcpy(px, py);
	strcpy(py, temp);
}

/*void print_names(char p[][20], size_t size)
{
	int i;
	for(i = 0; i < size; ++i){
		printf("%s ", p[i]);
	}
}*/
void print_names(char p[][20], size_t size)
{
	while(size--){
		printf("%s ", *p++);
	}
}

void sort_names(char (*p)[20], size_t size)
{
	int i, k;
	
	for(i = 0; i < size - 1; ++i){
		for(k = 0; k < size - 1 - i; ++k){
			if(strcmp(p[k], p[k + 1]) > 0){
				swap_names(p[k], p[k + 1]);
			}
		}
	}
}
int main()
{
	char names[10][20] = {"Murat", "Nedime", "Suleyman", "Necati",
	"Gizem", "Ferda", "Nurettin", "Aleyna", "Gurbuz", "Selami"};


	sort_names(names, asize(names));
	print_names(names, asize(names));
}

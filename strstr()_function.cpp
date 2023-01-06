#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char *p;
	
	printf("içinde arama yapilacak yaziyi girin:  ");
	sgets(s1);
	printf("aranacak yaziyi girin: ");
	sgets(s2);
	
	
	if((p = strstr(s1,s2)) != NULL){
		printf("bulundu... idx = %d (%s)\n", p - s1, p);
	}
	else
		printf("bulunamadi \n");
}

#include<stdlib.h>
#include<conio.h>
#include"cumur.h"
#include<string.h>
#include<stdio.h>


int main()
{
	int ival;
	int ch;
	int *pd = NULL;
	int counter = 0;
	
	randomize();
	for(;;){
		printf("tam sayi girmek istiyor musunuz? ");
		while((ch = _getch()) != 'e' && ch != 'h')
			;
		printf("%c\n", ch);
		if(ch == 'h')
			break;
		printf("tam sayiyi girin: ");
		//scanf("%d", &ival);
		ival = rand() % 1000;
		printf("%d\n", ival);
		pd = realloc(pd, (counter + 1) * sizeof(int));
		if(!pd){
			printf("bellek yetersiz\n");
			return 1;
		}
		pd[counter++] = ival;
	}
	
	if(counter){
		printf("\n\ntoplam %d sayi girdiniz\n\n", counter);
		display_array(pd, counter);
	}
	
	free(pd);
}

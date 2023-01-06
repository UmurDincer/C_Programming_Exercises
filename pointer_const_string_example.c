#include<stdio.h>
#include"cumur.h"

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
	
	randomize();
	
	while(1){
		printf("%s ", pmons[rand() % asize(pmons)]);
		getchar();
		
	}
}

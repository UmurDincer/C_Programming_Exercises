#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100
//[1] old_file_name dizisindeki yaziyi new_file_name dizisine kopyalay�n
//[2] e�er new_file_name dizisindeki dosya isminin uzant�s�(extension) yok ise uzant�y� .jpg yap�n
//[3] e�er new_file_name dizisindeki dosya isminin uzant�s� .txt ise uzant�y� .xls yap�n
//[4] e�er new_file_name dizisindeki dosya isminin uzant�s� .dat ise uzant�y� silin
//[5] di�er durumlarda new_file_name dizisindeki dosya isminin uzant�s�n� .docs yapin
int main()
{
	char old_file_name[SIZE];
	char new_file_name[SIZE];
	char *p;
	printf("dosya ismini girin: ");
	scanf("%s", old_file_name);
	
	strcpy(new_file_name, old_file_name);
	
/*	p = strrchr(new_file_name, '.');
	if(p == NULL){
		strcat(new_file_name, ".jpg");
	}*/
	
	if((p = strrchr(new_file_name, '.')) == NULL) // �stteki kodun
		strcat(new_file_name, ".jpg"); // i� d�nyas�nda ki yayg�n yaz�l�� �ekli
		
	else if(!strcmp(p, ".txt")){
		strcpy(p, ".xls");
	}
	else if(!strcmp(p, ".dat")){
		*p = '\0';
	}
	else
		strcpy(p, ".docs");
	printf("(%s) => (%s) \n", old_file_name, new_file_name);
	
	
}

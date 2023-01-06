#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100
//[1] old_file_name dizisindeki yaziyi new_file_name dizisine kopyalayýn
//[2] eðer new_file_name dizisindeki dosya isminin uzantýsý(extension) yok ise uzantýyý .jpg yapýn
//[3] eðer new_file_name dizisindeki dosya isminin uzantýsý .txt ise uzantýyý .xls yapýn
//[4] eðer new_file_name dizisindeki dosya isminin uzantýsý .dat ise uzantýyý silin
//[5] diðer durumlarda new_file_name dizisindeki dosya isminin uzantýsýný .docs yapin
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
	
	if((p = strrchr(new_file_name, '.')) == NULL) // üstteki kodun
		strcat(new_file_name, ".jpg"); // iþ dünyasýnda ki yaygýn yazýlýþ þekli
		
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

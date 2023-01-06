#include<stdio.h>
#include<string.h>

typedef int(*FCMP)(const char *, const char *);

/*öyle bir fonksiyon bildirin ki parametresi
strcmp gibi bir fonksiyonun adresini isteyen bir pointer olsun*/

//void foo(int(*fcmp)(const char *, const char *));
void foo(FCMP);

/*öyle bir fonksiyon bildirin ki hem parametresi hem de geri dönüþ deðeri türü
 strcmp gibi bir fonksiyonun adresini isteyen bir pointer olsun*/
 
//int (*func(	int(*)(const char *, const char *)))(const char *, const char *);
FCMP func(FCMP);

int main()
{
//	int(*fcmp)(const char *, const char *) = &strcmp; 
	FCMP fcmp = &strcmp;
	

	
/*	þimdi de elemanlarý fcmp gibi pointer deðiþkenler olan bir dizi
	oluþturalýmç
	function pointer arrays*/

//	int(* fa[])(const char *, const char *) = { &strcmp, &strcoll};
	FCMP a[] = {&strcmp, &strcoll};
	
	
	/*fcmp nin adresiyle bir pointer 
	deðiþkene ilk deðer veriniz*/
	
	
//	int(**fpp)(const char *, const char *) = &fcmp;
	FCMP *fpp = &fcmp;

}




#include<stdio.h>
#include<string.h>

typedef int(*FCMP)(const char *, const char *);

/*�yle bir fonksiyon bildirin ki parametresi
strcmp gibi bir fonksiyonun adresini isteyen bir pointer olsun*/

//void foo(int(*fcmp)(const char *, const char *));
void foo(FCMP);

/*�yle bir fonksiyon bildirin ki hem parametresi hem de geri d�n�� de�eri t�r�
 strcmp gibi bir fonksiyonun adresini isteyen bir pointer olsun*/
 
//int (*func(	int(*)(const char *, const char *)))(const char *, const char *);
FCMP func(FCMP);

int main()
{
//	int(*fcmp)(const char *, const char *) = &strcmp; 
	FCMP fcmp = &strcmp;
	

	
/*	�imdi de elemanlar� fcmp gibi pointer de�i�kenler olan bir dizi
	olu�tural�m�
	function pointer arrays*/

//	int(* fa[])(const char *, const char *) = { &strcmp, &strcoll};
	FCMP a[] = {&strcmp, &strcoll};
	
	
	/*fcmp nin adresiyle bir pointer 
	de�i�kene ilk de�er veriniz*/
	
	
//	int(**fpp)(const char *, const char *) = &fcmp;
	FCMP *fpp = &fcmp;

}




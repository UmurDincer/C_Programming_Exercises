#include<stdio.h>
#include<locale.h>

int main()
{
	char *ploc = setlocale(LC_ALL, "turkish");
	double dval;
	
	if(!ploc){
		printf("lokal degistirilemedi\n");
		return 1;
	}
	
	printf("lokal de�i�ikli�i yap�ld�... yeni lokale: (%s)", ploc);
	// t�rk�e karakter kullan�labilir
	printf("\nbir ger�ek say� giriniz: "); //23,345, ��nk� t�rkiyede
	scanf("%lf", &dval); // ondal�k ay�rac� virg�l
	
	printf("dval = %.3f\n", dval);
	
}

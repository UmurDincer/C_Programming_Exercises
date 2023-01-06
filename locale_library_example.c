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
	
	printf("lokal deðiþikliði yapýldý... yeni lokale: (%s)", ploc);
	// türkçe karakter kullanýlabilir
	printf("\nbir gerçek sayý giriniz: "); //23,345, çünkü türkiyede
	scanf("%lf", &dval); // ondalýk ayýracý virgül
	
	printf("dval = %.3f\n", dval);
	
}

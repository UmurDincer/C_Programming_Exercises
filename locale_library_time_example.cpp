#include<stdio.h>
#include<locale.h>
#include<time.h>

#define SIZE 100

int main()
{
	char *ploc = setlocale(LC_ALL, "turkish");
	
	if(!ploc){
		printf("lokal degistirilemedi\n");
		return 1;
	}
	
	printf("lokal deðiþikliði yapýldý... yeni lokale: (%s)", ploc);

	char str[SIZE];
	time_t timer;
	time(&timer);
	struct tm *p = localtime(&timer);
	
	strftime(str, SIZE, "%A %B %Y", p);
	printf("\n%s\n", str);
//  ITALIAN	
	ploc = setlocale(LC_ALL, "italian");
	if(!ploc){
		printf("lokal degistirilemedi\n");
		return 1;
	}
	
	printf("lokal degisikligi yapildi... yeni lokale: (%s)", ploc);
	
	strftime(str, SIZE, "%A %B %Y", p);
	printf("\n%s\n", str);
// SPANISH
		ploc = setlocale(LC_ALL, "spanish");
	if(!ploc){
		printf("lokal degistirilemedi\n");
		return 1;
	}
	
	printf("lokal degisikligi yapildi... yeni lokale: (%s)", ploc);
	
	strftime(str, SIZE, "%A %B %Y", p);
	printf("\n%s\n", str);	
// ENGLISH
	ploc = setlocale(LC_ALL, "english");
	if(!ploc){
		printf("lokal degistirilemedi\n");
		return 1;
	}
	
	printf("lokal degisikligi yapildi... yeni lokale: (%s)", ploc);
	
	strftime(str, SIZE, "%A %B %Y", p);
	printf("\n%s\n", str);	
}

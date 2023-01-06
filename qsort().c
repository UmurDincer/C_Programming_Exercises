#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>
#include<conio.h>

#define SIZE 100

int _icmp(const void *vp1, const void *vp2)
{
	if(*(const int *)vp1 > *(const int *)vp2)
		return 1;
	if(*(const int *)vp1 < *(const int *)vp2)
		return -1;
	return 0;
	// eðer bu fonksiyonun geri dönüþ deðerini
	//deðiþtirirsek, sýralama ona göre deðiþir
	//þuan küçükten büyüðe sýralanmýþ 
	// <
	// >  
	//büyükten küçüðe sýralar
}


int main()
{
	int a[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	qsort(a, SIZE, sizeof(int), &_icmp);
	printf("siralama tamamlandi\nbir tusa basiniz\n");
	_getch();
	system("cls");
	display_array(a, SIZE);
	
	
}

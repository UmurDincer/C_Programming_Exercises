#include"cumur.h"
#include<string.h>

#define SIZE 100
//memset
//memcpy
//memmove
//memchr
//memcmp
//embedded da s�k kullan�lan functionlar

//memset bir bellek blo�unun bytelar�n� belirli bir
//tamsay� de�eri ile set eden(dolduran) fonksiyon

void *memset1(void *vp, int val, size_t n)
{
	char *p = (char *)vp;
	
	while(n--)
		*p++ =val;
	return vp;
}

int main()
{
	int a[SIZE];
	char str[SIZE] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	//
//	memset(a, 0, sizeof (a));
	memset1(a, 0, sizeof(a));
	display_array(a, SIZE);
	
	printf("(%s)\n", str);
	memset(str + 3, 'B', 5);
	memset(str + 10, '!', 5);
	printf("(%s)\n", str);
	
	
	
	

}

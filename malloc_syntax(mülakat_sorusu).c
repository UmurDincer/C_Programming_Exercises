#include<stdlib.h>
#include"cumur.h"

//e�er n'e 0 de�eri verilerek yer a��lmak istenirse
//sonu� tan�ms�z de�il ancak derleyiciye ba�l� olarak
//farkl� sonu�lar verebilir.
//baz� derleyiciler NULL d�nd�r�r, baz�lar� ise random bir adres d�nd�r�r
//ancak pointer� dereferance etmek syntax hatas� olur.

int main()
{ int n = 0;

	char *p = malloc(n);
	
	if(p == NULL)
		printf("malloc NULL dondurdu\n");
	else
		printf("malloc'un dondurdugu adres: %p\n", p);
	
	free(p);
}

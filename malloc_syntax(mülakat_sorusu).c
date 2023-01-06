#include<stdlib.h>
#include"cumur.h"

//eðer n'e 0 deðeri verilerek yer açýlmak istenirse
//sonuç tanýmsýz deðil ancak derleyiciye baðlý olarak
//farklý sonuçlar verebilir.
//bazý derleyiciler NULL döndürür, bazýlarý ise random bir adres döndürür
//ancak pointerý dereferance etmek syntax hatasý olur.

int main()
{ int n = 0;

	char *p = malloc(n);
	
	if(p == NULL)
		printf("malloc NULL dondurdu\n");
	else
		printf("malloc'un dondurdugu adres: %p\n", p);
	
	free(p);
}

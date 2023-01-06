#include<stdio.h>

int *func(void){
	;
}

int main()
{
	int x = 10;
	char str[100] = "umur dincer";
	double dval = 2.3;
	
	void *vptr = func(); // geçerli ve doðru
	
	vptr = str; // geçerli
	
	vptr = &x; //geçerli
	
	vptr = &dval;
	
	//diðer pointer deðiþkenlerde olduðu gibi
	//bir vod pointer deðiþkenine NULL pointer
	//atanabilir.
	
	vptr = NULL;
	
	vptr = 0;
	
	//-------------------------------------------
	
//	*vptr = 10; geçersiz

//  bir void pointer içerik operatörlerinin 
// * ve [] operandý olamaz.
	
	
}

#include<stdio.h>

int func(int x){
	;
}
int foo(int y){
	;
}

int main()
{
	//yukarida bildirilen func fonksiyonunu adresi ile
	//fptr isimli bir pointer degiskene ilk deger veriniz
	
	//int (*fptr)(int) = &func;
	int (*fptr)(int) = func;
	//fptr degiskeninin degeri func fonksiyonunun adresi
	//yukarida tan�mlanan fptr de�i�kenine foo fonksiyonunun
	//addressini atay�n.
	//fptr = &foo;
	fptr = foo; // function to pointer conversion.
	
}

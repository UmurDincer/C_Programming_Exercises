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
	//yukarida tanýmlanan fptr deðiþkenine foo fonksiyonunun
	//addressini atayýn.
	//fptr = &foo;
	fptr = foo; // function to pointer conversion.
	
}

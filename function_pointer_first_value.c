#include<stdio.h>
#include<string.h>

//strcmp iþlevinin adresi ile ismi fp olan bir
//deðiþkene ilk deðer veriniz.

int main()
{
	int(*fp)(const char*, const char *) = & strcmp;
	
	//
	
	fp = &strcoll;
}

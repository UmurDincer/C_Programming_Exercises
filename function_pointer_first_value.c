#include<stdio.h>
#include<string.h>

//strcmp i�levinin adresi ile ismi fp olan bir
//de�i�kene ilk de�er veriniz.

int main()
{
	int(*fp)(const char*, const char *) = & strcmp;
	
	//
	
	fp = &strcoll;
}

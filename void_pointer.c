#include<stdio.h>

int *func(void){
	;
}

int main()
{
	int x = 10;
	char str[100] = "umur dincer";
	double dval = 2.3;
	
	void *vptr = func(); // ge�erli ve do�ru
	
	vptr = str; // ge�erli
	
	vptr = &x; //ge�erli
	
	vptr = &dval;
	
	//di�er pointer de�i�kenlerde oldu�u gibi
	//bir vod pointer de�i�kenine NULL pointer
	//atanabilir.
	
	vptr = NULL;
	
	vptr = 0;
	
	//-------------------------------------------
	
//	*vptr = 10; ge�ersiz

//  bir void pointer i�erik operat�rlerinin 
// * ve [] operand� olamaz.
	
	
}

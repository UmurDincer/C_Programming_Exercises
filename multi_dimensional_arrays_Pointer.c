#include<stdio.h>

int main()
{
	int a[3][5];
	int (*ptr)[5] = a;
//	int (*ptr)[5] = &a[0];
	
	//a dizisini g�sterecek bir pointer de�i�ken
	//onu 1 artt�rd���m�zda a'n�n 2.eleman�n� g�stermeli
	//yani 5 * sizeof(int)
}

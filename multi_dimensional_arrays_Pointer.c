#include<stdio.h>

int main()
{
	int a[3][5];
	int (*ptr)[5] = a;
//	int (*ptr)[5] = &a[0];
	
	//a dizisini gösterecek bir pointer deðiþken
	//onu 1 arttýrdýðýmýzda a'nýn 2.elemanýný göstermeli
	//yani 5 * sizeof(int)
}

#include<stdio.h>

void f1(void)
{
	printf("f1 fonksiyonu cagirildi\n");
}
void f2(void)
{
	printf("f2 fonksiyonu cagirildi\n");
}
void f3(void)
{
	printf("f3 fonksiyonu cagirildi\n");
}

int main()
{
	void(*fptr)(void) = &f1;
	
	fptr(); // burada fptr fonk �a�r� operat�r�n�n operand� yap�lm��
	
	fptr = &f2;
	fptr();
	
	fptr = &f3;
	fptr();
	
	
}

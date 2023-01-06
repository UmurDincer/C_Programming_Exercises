#include<stdio.h>

int main()
{
	int a[100] = { 0 };
	void *vp1 = a;
	void *vp2 = a + 20;
	
	//vp1 + 5;  geçersiz
	//vp2 - 10; geçersiz
	
	//vp2 - vp1; geçersiz 
}

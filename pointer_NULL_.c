#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int x = 10, y = 10, z = 254;

int main()
{
	int pa[10] = { &x, &y, &z };
	
	if(pa[5] == NULL)
		printf("dogru\n");
		
// ilk de�er verilmemi� pointer arrayler
// NULL de�er ile ba�lar

}

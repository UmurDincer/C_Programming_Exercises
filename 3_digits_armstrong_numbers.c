#include<stdio.h>

// 3 digits armstrong numbers abc = a^3+b^3+c^3

int main()
{
	int i;
	int d1, d2, d3;
	for(i= 100 ; i<1000 ; i++){
		d1 = i/ 100;
		d2= i/10 %10;
		d3=i%10;
		
		if(i== d1*d1*d1+d2*d2*d2+d3*d3*d3)
			printf("%d\n", i);
	}
}

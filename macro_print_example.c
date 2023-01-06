#include<stdio.h>

 #define iprint(a)		printf(#a " = %d\n", a)
 
 int main()
 {
 	int x=10;
 	int y=20;
 	int z=35;
 	
 	iprint(x);
 	iprint(x+y+z);
 	iprint(x*x+y*y+z*z);
 }

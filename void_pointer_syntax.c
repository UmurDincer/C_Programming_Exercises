#include<stdio.h>

int main()
{
	int ival = 10;
	void *vp = &ival;
	
	int *iptr = vp; //C'de ge�erli ve do�ru
	
	*iptr = 987;
	
	printf("ival = %d\n", ival);
	
}

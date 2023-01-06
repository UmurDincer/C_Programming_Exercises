#include<stdio.h>

int main()
{
	int x = 10;
	int *ptr = &x;
	
	if( ptr != NULL)
		printf("dogru\n");
	else
		printf("yanlis\n");
		
	ptr = NULL;
	
	if( ptr != NULL)
		printf("dogru\n");
	else
		printf("yanlis\n");
	

		
}

#include<stdio.h>
#include "cumur.h"
#include<conio.h>
int main()
{
		int a[4][5] = {
		{1,1,1,1,1},
		{2,2,2,2,2},
		{3,3,3,3,3},
		{4,4,4,4,4},
	};
	int i, k;
	
//	int *p = &a[0][0];
//	int *p = a[0];
	int *p = (int*)a;
	
	for(i = 0; i < 4; ++i){
		for(k = 0; k < 5; ++k){
			printf("%d", a[i][k]);
		}
		printf("\n");
	}
	dline();
	
	int n = 4 * 5;
	 while(n--){
	 	printf("%d ", *p++);
	 	_getch();
	 }
	 
	 printf("\n\n");
	    
	for(i = 0; i < 4; ++i)
		display_array(a[i],5);
}

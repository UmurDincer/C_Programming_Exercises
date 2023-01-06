#include<stdio.h>
#include "cumur.h"
int main()
{
		int a[4][5] = {
		{1,1,1,1,1},
		{2,2,2,2,2},
		{3,3,3,3,3},
		{4,4,4,4,4},
	};
	
	int n = 4;
	int(*ptr)[5] = a;
	
	while(n--){
		display_array(*ptr++,5);
	}
}

#include<stdio.h>

int main()
{
	int val=100;
	int i, j, k;
	
	for(i=1; i<10; ++i){
		for(j=0; j<10; ++j){
			for(k=0; k<10; ++k){
				if(i*i*i+j*j*j+k*k*k == val)
					printf("%d\n", val);
			    ++val;
			}
		}
	}
}

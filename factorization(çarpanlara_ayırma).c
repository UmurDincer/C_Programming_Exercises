#include<stdio.h>

int main()
{
	int x;
	printf("enter an integer: ");
	scanf("%d", &x);
	
	int n = 2;
	
	while (x !=1){
		while(x % n == 0){
			printf("%d ", n);
			x /= n;
		}
		++n;
	}
	
	printf("\n");
}

#include<stdio.h>

int main()
{
	int i, k, n;
	
	printf("how many line for star? ");
	scanf("%d", &n);
	
	for(i=1; i<=n;++i){
		for(k=0;k<i;++k){
			putchar('*');
}
	putchar('\n');
	}
}

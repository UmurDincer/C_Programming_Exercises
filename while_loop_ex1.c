#include <stdio.h>

int main()
{
	int c;
	
	while((c = getchar()) != '\n'){
		printf("%c %d\n", c, c);
	}
}

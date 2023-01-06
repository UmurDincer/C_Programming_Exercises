#include<stdio.h>
#include"cumur.h"

#define BUFFER_SIZE 100

char *get_name(void)
{
	static char buffer[BUFFER_SIZE];
	printf("bir isim girin: ");
	scanf("%s", buffer);
	
	return buffer;
}

int main()
{
	char *p[4];
	p[0] = get_name();
	p[1] = get_name();
	p[2] = get_name();
	p[3] = get_name();

	printf("%s %s %s %s\n", p[0], p[1], p[2], p[3]);
}

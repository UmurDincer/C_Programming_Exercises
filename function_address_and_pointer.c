#include<stdio.h>
#include"cumur.h"
#include<ctype.h>

void display_test_function(const char *pfname, int(*fp)(int))
{
	int i;
	printf("%s\n\n", pfname);
	for(i = 0; i < 128; ++i)
		if(fp(i))
			printf("%c ", i);
	printf("\n");
	dline();
}

int main()
{
	display_test_function("isupper:", &isupper);
	display_test_function("islower:", &islower);
	display_test_function("isdigit:", &isdigit);
	display_test_function("isalnum:", &isalnum);
	display_test_function("isxdigit:", &isxdigit);
	display_test_function("ispunct:", &ispunct);
	//..
	
}


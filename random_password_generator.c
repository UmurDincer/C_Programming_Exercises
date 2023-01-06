#include "cumur.h"

#define MAX_LEN 11
#define MIN_LEN 6

void print_random_password(void)
{
	int len = rand() % (MAX_LEN - MIN_LEN +1) + MIN_LEN;
	int c;
	int i;
	
	for(i=0; i<len;++i){
		while(!isalnum(c = rand() % 128))
			;
		putchar(c);
	} 
	
	putchar('\n');
}

int main()
{
	randomize();
	
	int i;
	
	for(i = 0; i< 20; ++i)
		print_random_password();
}

#include "fptr.h"

void myfoo(void)
{
	printf("myfoo cagirildi\n");
}

int main()
{
	FPTR fp;
	
	func(); // burada foo �a��r�lacak 
	fp = set_func(&myfoo);
	func(); // burada foo de�il myfoo �a��ralacak
	set_func(fp);
	func(); // burada yine foo �a��r�lacak

}


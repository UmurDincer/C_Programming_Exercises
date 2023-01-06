#include "fptr.h"

void myfoo(void)
{
	printf("myfoo cagirildi\n");
}

int main()
{
	FPTR fp;
	
	func(); // burada foo çaðýrýlacak 
	fp = set_func(&myfoo);
	func(); // burada foo deðil myfoo çaðýralacak
	set_func(fp);
	func(); // burada yine foo çaðýrýlacak

}


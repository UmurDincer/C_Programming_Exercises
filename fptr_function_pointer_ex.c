#include "fptr.h"

void myfoo(void)
{
	printf("myfoo cagirildi\n");
}

int main()
{
	FPTR fp;
	
	func(); // burada foo çağırılacak 
	fp = set_func(&myfoo);
	func(); // burada foo değil myfoo çağıralacak
	set_func(fp);
	func(); // burada yine foo çağırılacak

}


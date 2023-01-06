#include"cumur.h"

//range parameter
void print_array(const int *pf, const int *pe)
{
	while(pf != pe){
		printf("%3d ", *pf++);
	}
	
	printf("\n");
}

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	
//	display_array(a, 10);
	print_array(a, a + 10);
	print_array(a, a + 5);
	print_array(a, a + 3);
	
}

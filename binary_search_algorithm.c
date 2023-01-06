#include "cumur.h"

#define SIZE 100

int main()
{
	int a[SIZE];
	int ival;
	int idx_first, idx_last, idx_mid;
	int cnt;
	randomize();
	set_random_array(a, SIZE);
	sort(a, SIZE);
	display_array(a, SIZE);
	
	printf("enter the searched value: ");
	scanf("%d", &ival);
	
	idx_first = 0;
	idx_last = SIZE -1;
	
	while(idx_first <= idx_last){
		++cnt;
		idx_mid = (idx_first + idx_last) / 2;
		if(a[idx_mid] == ival)
			break;
		if(a[idx_mid] > ival)
			idx_last = idx_mid - 1;
		else
			idx_first = idx_mid +1;
	}
	
	if(idx_first <= idx_last){
		printf("the value is found. its index is %d\n", idx_mid);
	}
	else
		printf("the value could not be found.\n");	
	
	printf("total of %d comparison has been made.\n", cnt);
}

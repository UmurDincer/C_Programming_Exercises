#include<stdio.h>
#include<math.h>
// perfect numbers(sum of dividers of the number is equal the number 6 28 496  8128)

int is_perfect(int val)
{
	int div_sum=0;
	int i;
	for(i=1; i<=val/2; ++i){
		if(val%i==0)
			div_sum+=i;	
	}
	
	return val==div_sum;
}

int main()
{
	int i;
	for(i=2;i<10000;++i) {
		if(is_perfect(i))
			printf("%d is perfect!\n", i);
	}
}

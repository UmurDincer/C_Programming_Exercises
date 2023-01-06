#include<stdio.h>
#include<math.h>

int revdigit(int val)
{ 
	int result=0;
	while (val !=0){
		result = result * 10 + val % 10;
		val /= 10;
	}
	return result;
}

int sumdigit(int val)
{
	int sum=0;
	
	while(val != 0){
		sum+=val%10;
		val/=10;
	}
	return sum;
}
int ndigit(int val)
{
	int digit_count=0;
	
	if(!val)
		return 1;
	
	while(val!=0){
		++digit_count;
		val/=10;
	}	
	return digit_count;
}

int main()
{
	int ival;
	printf("enter an integer: ");
	scanf("%d", &ival);
	
	printf("%d has %d digits.\n", ival, ndigit(ival));
	printf("sum of %d is %d. \n", ival, sumdigit(ival));
	printf("reverse of %d is %d. \n", ival, revdigit(ival));
}

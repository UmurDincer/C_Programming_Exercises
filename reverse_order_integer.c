 #include"cumur.h"
 #include<ctype.h>
 
 #define SIZE 200
 
 int main()
 {
	char str[SIZE];
	int temp;
	int ival;
	int idx = 0;
	
	printf("enter an integer: ");
	scanf("%d", &ival);
	temp = ival;
	
	while(temp){
		str[idx++] = temp % 10 + '0';
		temp /= 10;
	}
 	
 	str[idx] = '\0';
 	printf("%s\n", str); 
 	int i;
 	char c;
 	for(i=0; i < idx / 2; ++i){
 		c = str[i];
 		str[i] = str[idx - 1 -i];
 		str[idx - 1 -i] = c;
	 }
	printf("%s\n", str); 
 }

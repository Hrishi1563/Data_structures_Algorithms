#include <stdio.h>
int main()
{
	float num;
	int right,num1 ;
	printf("Enter any number\n");
	scanf("%f",&num);
	num1=num;
	right = num1%10;
	printf("The rightmost digit in the entered number is %d",right);
	return 0;
}

#include <stdio.h>
int main()
{
	int num;
	printf("Enter any integer number \n");
	scanf("%d",&num);
	if(num>0)
	printf("The entered number is positive");
	else if(num<0)
	printf("The entered number is negative");
	else
	printf("The entered number is zero");
	
	return 0;
	
}

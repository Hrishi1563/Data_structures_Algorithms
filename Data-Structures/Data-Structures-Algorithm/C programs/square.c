#include <stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter any integer number\n");
	scanf("%d",&num);
	int i;
	for(i=0;num>0;i++)
	{
		int x=num%10;
		num=num/10;
		sum=sum+x*x;
		
	}
	printf("The Sum of all digits in number is : %d", sum);
}

#include<stdio.h>
int main()
{
	int num,i,j,num1;
	int product=1,sum=0;
	printf("Enter any integer value\n");
	scanf("%d",&num);
	num1=num;
	
	for(i=1;num>0;i++)
	{
		int d=num%10;
		for(j=1;j<=d;j++)
		{
			product*=j;
			
		}
		sum+=product;
		num=num/10;
		product=1;
	}
	
	if(num1==sum)
	printf("The given number is a Strong number");
	else
	printf("The given number is not a Strong number");
		
		
		
		
}

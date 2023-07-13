#include<stdio.h>
int main()
{ 
    int num,num1,i,d,sum=0;
	printf("Enter any integer number\n");
	scanf("%d",&num);
	num1=num;
	
	for(i=0;num>0;i++)
	{
		d=num%10;
		sum+=(d*d*d);
		num=num/10;
		
	}
	
	if(sum==num1)
    printf("The given number is Armstrong Number");
	else
	printf("The given number is not Armstrong Number");
	
}


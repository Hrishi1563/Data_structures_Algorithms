#include <stdio.h>
#include <math.h>
void fun(int f,int n)
{
	int i;
	int j=f;
	int num1=0;
	int n1;
	char ch[100];
	for(i=0;i<f;i++)
	{
		n1=n%10;
		num1+=n1*pow(10,j-1);
		n=n/10;
		j--;
		
		
	}
	printf("The number after fliiping is %d%d",n,num1);
	
}





int main()
{
	int flip;
	int num;
	printf("Enter any number \n");
	scanf("%d",&num);

	printf("Enter the number of last digits you want to flip \n");
	scanf("%d",&flip);
	
    fun(flip,num);
	
}

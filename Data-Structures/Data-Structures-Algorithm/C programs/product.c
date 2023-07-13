#include<stdio.h>
int main()
{
	int n1,n2;
	int product=0;
	printf("Enter any two positive 4 digit number\n");
	scanf("%d %d",&n1,&n2);
	int i;
	for(i=0;n1>0;i++)
	{
		int x=n1%10;
		int y=n2%10;
		n1=n1/10;
		n2=n2/10;
		product+=x*y;
		
		
	}
	
	printf("The result of the operations is %d ",product);
}

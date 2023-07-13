#include <stdio.h>
int main()
{
	int n1,n2;
	int count =0;
	printf("Enter any two numbers n1 and n2 respectively \n");
	scanf("%d %d",&n1,&n2);
	int i;
	printf("All even numbers between n1 and n2\n");
	for(i=n1+1;i<n2;i++)
	{
		if(i%2==0)
		{
		printf("%d ",i);
		count ++;
	}
		else
		continue;
	}
	printf("\n");
	printf("The total number of even numbers between n1 and n2 : %d",count);
}

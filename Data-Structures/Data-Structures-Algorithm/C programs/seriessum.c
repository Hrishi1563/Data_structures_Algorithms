#include <stdio.h>

int factorial(int j)
{
	int k=j;
	if(j==1)
	return 1;
	j--;
	return k*factorial(j);
}


int main()
{
	float sum=0;
	int i;
	for(i=1;i<=5;i++)
	{
		int n=factorial(i);
		sum+=(n/i);
	}
	printf ("Sum of  series is : %.2f",sum);
}

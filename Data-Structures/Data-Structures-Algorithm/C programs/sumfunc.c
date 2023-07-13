#include<stdio.h>
int sum=0;
int a=0;
int matrix(int m1,int num1[m1][m1])
{
	
	sum+=num1[m1-a][m1-a];
	printf("%d",sum);
	if (a==m1-1)
	{
		return sum;
	}
	printf("%d",sum);
	a++;
	return matrix(m1,num1);
}






int main()
{
	int m,n;
	printf("Enter number of rows and columns of nxn  matrix \n");
	scanf("%d",&m);
	scanf("%d",&n);
	int num[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[i][j]);
		
		}
	}
	printf("The sum of elements of main digonal is : %d", matrix(m,num));
	
}

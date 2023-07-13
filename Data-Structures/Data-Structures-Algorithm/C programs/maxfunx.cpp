#include <stdio.h>

int max(int n1,int n2)
{
	return n1>n2?n1:n2 ;
	
}

int min(int n1,int n2)
{
	
	return n1>n2?n2:n1;
}
int main()
{ 
 int num1,num2;
	printf("Enter set of 5 values to compare their values \n");
	int i,j;
	int arr1[5],arr2[j];
	for (i=0;i<5;i++)
	{   printf("Set %d values ",i+1);
		scanf("%d %d",&num1,&num2);
	
		arr1[i]=max(num1,num2);
		arr2[i]=min(num1,num2);		
	}
	for(i=0;i<5;i++)
	{
		printf("The maximum value from set %d is : %d \n", i+1,arr1[i]);
		printf("The minimum value from set %d is : %d \n", i+1,arr2[i]);
	}
	
}

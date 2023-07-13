#include<stdio.h>
int main()
{

	float num1,num2;
	int result;
	printf("Enter any two numbers\n");
	scanf("%f%f",&num1,&num2);
	result=(int)(num1/num2);
	printf("result is %d\n",result);
	
	float n2;
	int n1,result1;
	printf("Enter any -ve integer and +ve float numbers\n ");
	scanf("%d%f",&n1,&n2);
	result1=(int)n1/n2;
	printf("result is %d\n",result1);
	 
	float n3;
	int n4,result2;
	printf("Enter +ve float value and -ve integer value\n");
	scanf("%f%d",&n3,&n4);
	result2=(float)n3/n4;
	printf("result is %d\n",result2);
	
	
	
	
}

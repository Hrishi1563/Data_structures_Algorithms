#include <stdio.h>
#include <math.h>
int main()
{
	
	// Series a
	int n;
float sum=1;
	int i,j;
	printf("Enter any integer number to print series \n");
	scanf("%d",&n);
	printf("Output of series 1st is \n");
	for( i=2;i<=n;i++)
	{
	   if(i%2==0)	
		sum+=i*i;
		else
		sum+=(-1*(i*i));
		}
		printf("%.0f\n",sum);
		
		printf("Output of series 2nd is \n");
		// Series b
		sum=0;
		for(i=1;i<=n;i++)
		{
			sum+=i*i;
			
		}
	
	printf("%.0f\n",sum);
	
	printf(" series 3rd \n");
	// Series c
	int x ;
	printf("Enter value of x for the series\n");
	scanf("%d",&x);
	printf("Output of series 3rd is\n");
	float product =1;
   float result=0 ;
	for(i=1;i<=n;i++)
	{ 
	    if(i%2==0)
	    sum=pow(x,2*i-1)*(-1);
	    else
	     sum=pow(x,2*i-1);
		for(j=1;j<=(2*i-1);j++)
		{
		  product*=j;
		}
		result+=(sum/product);
		product=1;
	}
	printf("%.3f",result);
	
	
	
	
		
		
	}


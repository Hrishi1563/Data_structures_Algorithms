#include <stdio.h>
#include <math.h>
void convert(int n)
{
    int d=0;
   int num[100];
   int i,k=0;
    for(i=0;n>=1;i++ )
    {
        int j=n%2;
        num[i]=j;
        n=n/2;
       
    }
    int h;
    for(h=i-1;h>=0;h--)
{
printf("\n");
printf(" %d ",num[h]);
}  

}
void decimal(int n)
{
  int i;
  int sum=0;
  for(i=0;n>0;i++)
  {
  int j=n%10;
  sum+=(pow(2,i)*j);
  n=n/10;
   
  }
  printf("%d \n",sum);

}
void add(int n,int m)
{
	int i;
	int result[8];
	for(i=0;i<8;i++)
	{
		int j=n%10;
		int k=m%10;
		n=n/10;
		m=m/10;
		result[i]=j^k;
		if(j==1 && k==1)
		{
		carry:	
		i++;
		int j=n%10;
		int k=m%10;
		n=n/10;
		m=m/10;
		result[i]=1^(j^k);	
		if(j!=0 || k!=0)
		goto carry;
		
		}
	}
	printf("Unsigned Binary addittion\n");
	for(i=7;i>=0;i--)
	{
		printf("%d",result[i]);
	}
	printf("\n");
}

void signed_add(int n,int m)
{
	int i;
	int g = n/10000000;
	int f=m/10000000;
	int result[9];
	for(i=0;i<8;i++)
	{
		int j=n%10;
		int k=m%10;
		if(i!=7)
		{
		n=n/10;
		m=m/10;
	}
		result[i]=j^k;
		if(j==1 && k==1)
		{
		carry:	
		i++;
	
		int j=n%10;
		int k=m%10;
		if(i!=7)
		{
		n=n/10;
		m=m/10;
	}
		result[i]=1^(j^k);	
		if(j!=0 || k!=0)
		goto carry;
		
		}
	}
	if((g+f)==1 && result[7]==0)
	result[8]=1;
	else if((g+f)==2)
	result[8]=1;
	else
	result[8]=0;
	printf("Signed binary addition \n");
	for(i=8;i>=0;i--)
	{
		printf("%d",result[i]);
	}
}





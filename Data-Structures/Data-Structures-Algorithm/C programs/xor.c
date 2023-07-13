#include <stdio.h>

int main()
{
	int a,b;
    scanf("%d\n%d",&a,&b);
	int result[8];
	int i,j,k;
	for(i=7;i<=0;i--)
	{
		 j=a%10;
		 k=b%10;
		printf("%d",j);
		result[i]=j^k;
		a=a/10;
		b=b/10;
	}
	
	}

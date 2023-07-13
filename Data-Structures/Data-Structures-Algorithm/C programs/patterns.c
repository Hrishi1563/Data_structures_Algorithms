#include<stdio.h>
// pattern 1
int main()
{
	printf("pattern 1\n");
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j<2-i)
			printf(" ");
			else if(j>2+i)
			printf(" ");
			else
			printf("*");
			
		}
		printf("\n");
	}
	// pattern 2
	printf("\n");
			printf("pattern 2\n");
	for(i=5;i>=1;i--)
	{
		
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		
		}
		printf("\n");
		
	}
	// pattern 3
		printf("\n");
			printf("pattern 3\n");
	for(i=1;i<=5;i++)
	{
	
		for(j=i;j>=1;j--)
		{
			printf(" %d",j*j);
			
		}
		printf("\n");
		
	}
	printf("\n");
	
	// pattern 4
	printf("\n");
			printf("pattern 4\n");
	for(i=0;i<=4;i++)
	{
		
		for(j=0;j<=10;j++)
		{
			if(j<=i) 
			printf("%d",j+1);
			
			else if(j>=(10-i))
			printf("%d",(11-j));
			else
			
			printf(" ");
		}
		printf("\n");
	}
	// pattern 5
	printf("\n");
			printf("pattern 5\n");
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}

	for(i=4;i>=1;i--)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	//pattern 6
		printf("\n");
	printf("pattern 6\n");
		char ch=65;
	
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=5+i;j++)
		{
			if(j>=5-i)
			{
				printf("%c",ch);
				ch=ch+2;
			}
			else
			printf(" ");
		}
		printf("\n");
		ch=65;
		
	}
	for( i=3;i>=0;i--)
	{
			for(j=1;j<=5+i;j++)
		{
			if(j>=5-i)
			{
				printf("%c",ch);
				ch=ch+2;
			}
			else
			printf(" ");
		}
		printf("\n");
		ch=65;
		
		
	}
	
	
	
}

#include <stdio.h>
char S[1000];
char w[100];
void replace(int p)
{
	
	int j,k,l=0;
	char S1[1000];
	for( j=0;S[j];j++)
	{
		if(j==p-1)
		{
		    
		
			for(k=0;w[k];k++)
			{
				S1[l]=w[k];
				l++;
			}
			S1[l]=S[j];
			l++;
			
		}
	
		else
		{
			
	
		
			S1[l]=S[j];
			l++;
			
		
		}
		
	}
	printf("%s",S1);
}
	
	




int main()
{
  
  printf("Enter any String \n");
  scanf("%s",S);
  printf("Enter the word you want to enter \n");
  scanf("%s",w);
  printf("Enter the place where you want to enter the word\n");
  int i;
  scanf("%d",&i);
  replace(i);
  
  
	
}

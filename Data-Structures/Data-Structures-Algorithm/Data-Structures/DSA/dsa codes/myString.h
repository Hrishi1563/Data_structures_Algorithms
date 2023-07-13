#include <stdio.h>

int length(char array[])
{
	int i;
	for(i=0;array[i];i++)
	{
	continue;}
	
	
	return i+1 ;
	
}
void concat(char array[],char array1[])
{
 int i,j=0;
 for(i=length(array)-1;i<length(array)+length(array1)-2;i++)
 {
 	 array[i]=array1[j];
 	j++;
 }
 printf("Concated string is %s\n",array);
		
	
	
		
	}
	
	void copy(char array[])
	{
		char array1[sizeof(array)];
		int i;
		for(i=0;array[i];i++)
		{
			array1[i]=array[i];
		}
		printf(" Copied string is %s\n",array1);
	}
	
	void occurence (char array[])
	{
		int i;
		int flag=0;
		for(i=0;array[i];i++)
		{
			if(array[i]=='c')
			{
			printf("first occurence of c is at position  %d\n", i+1);
			flag=-1;
			break;
			}
		}
		if(flag==0)
		printf(" 'c' is not present  there  in the string\n ");
	}
	
void reverse(char array[])
{ int i;
	for(i=length(array)-2;i>=0;i--)
	{
		printf("%c",array[i]);
	}
	
}
void replace(char array[])
{
	int i ;
	for(i=0;i<length(array)-1;i++)
	{
		if(array[i]=='a' || array[i]=='e' || array[i]=='o' || array[i]=='i' || array[i]=='u' || array[i]=='A' || array[i]=='E' || 
		array[i]=='O' ||array[i]=='O' || array[i]=='U')
        array[i]='*';
        else
        array[i]='#';
        
        printf(" String after swapping elements %c\n",array[i]);
        
	}
	
	
}

void sub_string(char array[],char search[])
{
	int i,j=0 ;
	for(i=0;i<length(array)-1;i++)
	{
		if(array[i]==search[j])
		{
			j++;
			if(j==length(search)-1)
			break ;	
		}
		else
		j=0;
	}
	
	if(j==length(search)-1)
	printf("The substring is present in the senetence \n");
	else
	printf("The substring is not pressent in the senetenece\n");
}

void compare(char array[],char array1[])
{
	int i;
	int flag=0;
	for(i=0;i<length(array)-1;i++)
	{
		if(array[i]!=array1[i])
		flag=-1;
		else
		continue;
	}
	if(flag==-1)
	printf("The strings are not same\n");
	else
	printf("The strings are same \n");
		
	}



	
	

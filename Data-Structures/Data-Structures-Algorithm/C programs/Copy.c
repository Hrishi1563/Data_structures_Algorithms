#include <stdio.h>
int main()
{


{
	int j,x;
	char S1[100];
	char S2[99];
	printf("Enter any String \n");
	gets(S1);
	int i=0;
	for(i=0;S1[i]!='\0';i++)
	{
		S2[i]=S1[i];
	}
	int b;
	printf(" Copied String : ");
 for(b=0;b<i;b++)
 {
 	printf("%c",S2[b]);
 }
 printf("\n");
 
	
	
	// part2 comparing two strings 
	char S3[100];
	printf("Enter any other String to compare \n");
	gets(S3);
 	int a=0;
	for(i=0;S1[i]!='\0';i++)
	{
		if(S1[i]==S3[i])
		{
			a=0;
			if(S1[i+1]=='\0' && S3[i+1]=='\0')
			{
				a=1;
				break;
			}
		}
	
		else
		{
			a=-1;
			break;
		}
	}
	if(a==1)
	printf("Both Strings are same\n");
	else
	printf("Both Strings are not equal\n");


//Concat Two Strings

printf("Enter any string to concat to first string \n ");
char S4[100];
gets(S4);
char S5[200];
int g=0;
for(i=0;i<100 ;i++)
{
	if(S1[i]!='\0')
	S5[i]=S1[i];
	
     else
	 {   S5[i]=' ';
	   g=1;
	   j=i+1;
	 
	   x=0;
		for(x=0;S4[x]!='\0';x++)
		{
			S5[j+x]=S4[x];
		}
		
	}
	if(g==1)
	break;
}
int t=0;
for(t=0;t<j+x;t++)
printf("%c",S5[t]);
printf("\n");

//part 4 Reverse a String
char S6[100];
printf("Enter any string to reverse\n");
gets(S6);
char S7[100];
t=0;
for(t=0;t<100;t++)
{
	if(S6[t]!='\0')
	{

	continue;
}
	
	else
	{
		
		
	int p;
		int  n=0;
		for(p=t-1;p>=0;p--)
		{
		
		
		
			S7[n]=S6[p];
			n++;
		}
	}
	break;
	}
int l=0;
for(l=0;l<t;l++)
{
	printf("%c",S7[l]);
}


}
}


#include <stdio.h>
int main()
{
	char S1[100];
	printf("Enter any String\n");
	gets(S1);
	int i;
	int sum=0;
	for(i=0;S1[i]!='\0';i++)
	{
	
		int ASCII=S1[i];
		sum+=ASCII;
	}
	printf("%d",sum);
}

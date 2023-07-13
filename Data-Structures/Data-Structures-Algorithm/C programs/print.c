#include <stdio.h>
int main()
{
	char s1[100];
	printf("Enter any String\n");
	gets(s1);
	char s2[100];
	printf("Enter other string\n");
	gets(s2);
	char s3=' ';
	printf("%s%c%s ",s1,s3,s2);
}

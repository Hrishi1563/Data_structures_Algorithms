#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any one character \n");
	scanf("%c",&ch);
	if((ch>=97 && ch<=122)|| (ch>=65 && ch<=90))
	printf("Entered character is an alphabet");
	else
	printf("Entered character is not an alphabet");
	return 0;
}


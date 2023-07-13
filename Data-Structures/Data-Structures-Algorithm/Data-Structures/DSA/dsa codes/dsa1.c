#include <stdio.h>
#include "myString.h"
int main()
{
	char array[200],array1[100];
	printf("Enter main string\n");
	gets(array);
	printf("Enter another string\n");
    gets(array1);
   concat(array,array1);
   printf("Enter string to be copied\n");
   char array2[100];
   gets(array2);
    copy(array2);
    printf("Enter string in which occurences of c is to be found\n");
    char array3[100];
    gets(array3);
	occurence(array3);
	printf("Enter string to be reversed \n");
	char array4[100];
	gets(array4);
reverse(array4);
printf("Enter any string");
	replace(array4);
	printf("Enter any string to find in main string\n");
	char array5[100];
	gets(array5);
sub_string(array,array1);//compare(array,array1);
	
}

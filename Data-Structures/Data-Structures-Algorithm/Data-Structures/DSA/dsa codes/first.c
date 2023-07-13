#include <stdio.h>
#include "myHeader.h"

int main()
{
int m,a,b;
printf("Enter decimal number to be converted to binary \n");
scanf("%d",&m);
convert(m);
printf("Enter binary string to convert to decimal \n");
int j ;
scanf("%d",&j);
decimal(j);

printf("Enter binary strings to do unsigned and signed binary additiion");
printf("ENTER 1");
scanf("%d",&a);
printf("\nENTER 2");
scanf("%d",&b);
add(a,b);


signed_add(a,b);

}


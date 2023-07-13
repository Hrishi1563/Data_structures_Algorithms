#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter any two integer values\n");
	scanf("%d %d",&a,&b);
    printf(" a=%d b=%d\n", a,b);
	// Swapping with a varaible 
	temp =a;
	a=b;
	b=temp;
	printf("After Swap\n");
	printf(" a=%d b=%d", a,b);
	return 0;
	
	
	
}


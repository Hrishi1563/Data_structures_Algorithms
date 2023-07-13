#include <stdio.h>
int main()
{
	float inches,cm;
	printf("Enter the value of length in inches \n");
	scanf("%f",&inches);
	cm=2.54*inches ;
	printf("The value  in cm is %.3f",cm);
	
	
	return 0;
	
}

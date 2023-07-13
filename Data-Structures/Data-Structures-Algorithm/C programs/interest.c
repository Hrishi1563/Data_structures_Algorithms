#include <stdio.h>
int main()
{
	float i,t,r,p;
	printf("Enter principle amount\n");
	scanf("%f",&p);
	printf("Enter time \n");
	scanf("%f",&t);
	printf("Enter rate of interest\n");
	scanf("%f",&r);
	i= (p*r*t)/100;
	printf("Interest for the given amount is %.2f",i);
	return 0;
}


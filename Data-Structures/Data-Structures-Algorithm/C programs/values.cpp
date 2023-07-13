#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	double value;
	printf("Enter values of a,b and c respectively \n");
	scanf("%f %f %f",&a,&b,&c);
	printf("\n");
	value=pow(a,3)+pow(b,3)+pow(c,3)-3*a*b*c;
	printf("%.2f\n",a*a+2*a*b+b*b);
	printf("%.2f\n",a*a-2*a*b+b*b);
	printf("%.2f\n",value);
	return 0;
}


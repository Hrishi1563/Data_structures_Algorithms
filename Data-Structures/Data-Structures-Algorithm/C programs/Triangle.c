#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter all three sides of triangle \n");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && a==c)
	printf("The given triangle is Equilateral triangle");
	else if(a==b || b==c || a==b)
	printf("The given traingle is Isoceles triangle");
	else
	printf("The given triangle is Scalene triangle");
	
	return 0;
	
}

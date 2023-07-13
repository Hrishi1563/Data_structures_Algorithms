#include <stdio.h>
float multiply(float num,int power)
{
	
	if(power==1)
	{
		return num;
	}
	
	
	return num*multiply(num,power-1);
}
int main()
{
	float x;
	int y;
	printf("Enter any Number \n");
	scanf("%f",&x);
	printf("Enter exponent of the number\n");
	scanf("%d",&y);
	printf("%.2f raised to power %d is : %0.2f",x,y,multiply(x,y) );
	
}

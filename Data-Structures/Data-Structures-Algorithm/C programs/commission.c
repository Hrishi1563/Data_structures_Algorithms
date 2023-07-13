#include <stdio.h>
int main()
{
	float amt,insurance,total;
	printf("Enter total amount of policy sold \n");
	scanf("%f",&amt);
	if(amt<=10000)
	insurance=0.005*(amt);
	else  if(amt>10000 && amt<25000)
	insurance= 50 + 0.006*(amt-10000);
	else 
	insurance= 140 + 0.0075*(amt-25000);
	
	total=amt-insurance;
	printf("Total commission is %.3f",insurance);
	return 0;
}
	

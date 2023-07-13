#include <stdio.h>
int main()
{
	float amt1,amt2,dis;
	printf(" Enter the total amount of Mill cloth purchase \n");
	scanf("%f",&amt1);
  printf(" Enter the total amount of Handloom items purchase \n");
	scanf("%f",&amt2);
	float total = amt2+amt1;
	if(total<=100 )
     amt2=amt2-(0.05)*amt2;
     else if(total>=101 && total<=200)
     {
     	amt1=amt1-(0.05)*amt1;
     	amt2=amt2-(0.75)*amt2;
	 }
	 else if(total>=201 && total<=300)
	 {
	 	amt1=amt1-(0.75)*amt1;
	 	amt2=amt2-(0.1)*amt2;
	 }
	 else
	 {
	 	amt1=amt1-(0.1)*amt1;
		 amt2=amt2-(0.15)*amt2;
		 
	}
	total = amt1+amt2;
	printf("Your total amount of purchase %.3f",total);
}

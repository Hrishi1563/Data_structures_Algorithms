#include <stdio.h>
int main()
{
	float m;
	
	printf("Enter your marks for the subject \n");
	scanf("%f",&m);// m stands for marks
    if(m>=80 && m<=100)
	printf("You have been awarded Distinction grade");
	else if(m>=60 && m<=79)
	 	printf("You have been awarded First class grade");
	else if(m>=35 && m<=59)
		printf("You have been awarded Second class grade");
	else if(m<35 && m>=0)
		printf("You grade is Failed");
	else
	printf("Marks entered are not valid ");
	

	
	
	
	
	
	
	}

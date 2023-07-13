#include <stdio.h>
int main()
{
	float a,b;
	int i ;
	printf("Enter values of a and b \n");
	scanf("%f %f",&a,&b);
		printf (" Enter 1 for addition or 2 for subtraction \n");
		printf (" Enter 3 for multiplication or 4 for divison\n");
		scanf("%d",&i);
		switch(i)
		{
		
		case 1 :
			printf("%f",a+b);
			break ;
		case 2 :
			printf("%f",a-b);
			break ;
		case 3 :
			printf("%.2f",a*b);
			break;
		case 4 :
			printf("%.2f",a/b);
			break;
	}
}
		
	

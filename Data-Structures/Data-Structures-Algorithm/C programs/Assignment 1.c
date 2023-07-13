#include <stdio.h>
int main()
{
	int a;
	float b,c,d,e;
	 char name[100];
	 char college[100];
    printf("Enter 25 \n");
    scanf("%d",&a);
    printf("Enter 5.3267 \n");
     scanf("%f",&b);
    printf("Enter 5.3267\n");
     scanf("%f",&c);
    printf("Enter 5664.57567456\n");
    scanf("%f",&d);
    printf("Enter 35345354 \n");
    scanf("%f",&e);
    printf("Enter your name\n");
    gets(name);
    printf("Enter your college name\n");
    gets(college);
    printf("\n");
    printf("%d \n",a);
    printf("%.4f \n",b);
    printf("%.2f \n",c);
    printf("%.2f \n",d);
    printf("%f \n",e*e);
    printf(" %s",name);
    printf("%s",college);
	return 0;
}

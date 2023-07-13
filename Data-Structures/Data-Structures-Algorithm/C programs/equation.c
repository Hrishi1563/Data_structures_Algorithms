#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,k,x,value;
	printf ("Enter values of a,b,c,d,k and x respectively \n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&k,&x);
	if(x>k)
	value=a*(int)pow(x,3)-b*(int)pow(x,2)+c*x-d;
	else if(x<k)
	value=(-1)*(a*(int)pow(x,3)-b*(int)pow(x,2)+c*x-d);
	else 
	value =0 ;
	
	printf ("The value of equations is %d ",value);
	
	
	return 0;
	
}

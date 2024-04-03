//Display the the of X^Y 
#include<math.h>
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of X,Y : ");
	scanf("%d%d",&x,&y);
	double result = pow(x,y);
	printf(" the value of %d to the power %d is : %.2lf",x,y,result);
	return 0;
}

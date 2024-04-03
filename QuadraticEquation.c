#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double  X,X1,X2;
	printf("Enter  the value of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	X=sqrt(b*b-4*a*c);
	X1=(-b+X)/2*a;
	X2=(-b-X)/2*a;
	printf("The roots of the equation is X1=%lf\n X2=%lf\n ",X1,X2);
	return 0;
}

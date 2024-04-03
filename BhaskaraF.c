// beecrowd 1036
#include<stdio.h>
#include<math.h>
int main(){
	double A,B,C,R1,R2,X;
	scanf("%lf%lf%lf",&A,&B,&C);

X=sqrt(B*B-4*A*C);
R1=(-B+X)/(2*A);
R2=(-B-X)/(2*A);

if(X>0&&A!=0)
{
		printf("R1 = %.5lf\n",R1);
		printf("R2 = %.5lf\n",R2);
}
	else
	
		printf("Impossivel calcular");

return 0;
}



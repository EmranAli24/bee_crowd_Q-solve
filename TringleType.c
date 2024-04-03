//beecrowd 1045
#include<stdio.h>
int main(){
	double A,B,C;
	scanf("%lf %lf %lf",&A,&B,&C);
if((A>=(B+C))||(B>(A+C))||(C>(A+B)))
	printf("NAO FORMA TRIANGULO\n");
else if (((A*A)==(B*B+C*C))||((C*C)==(B*B+A*A))||((B*B)==(A*A+C*C)))
	printf("TRIANGULO RETANGULO\n");
else if (((A*A)>(B*B+C*C))||((C*C)>(B*B+A*A))||((B*B)>(A*A+C*C)))
{  
	printf("TRIANGULO OBTUSANGULO\n");

}
else if (((A*A)<(B*B+C*C))||((C*C)<(B*B+A*A))||((B*B)<(A*A+C*C)))
{
	printf("TRIANGULO ACUTANGULO\n");
}
if((A==B&&A!=C)||(B==C&&B!=A)||(A==C&&A!=B))
printf("TRIANGULO ISOSCELES\n");
if(A==B&&A==C)
	printf("TRIANGULO EQUILATERO\n");

	return 0;
}

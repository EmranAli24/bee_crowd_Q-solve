/*
   write a program that read any number x and display lag(x),log_10(x),e^x
 */
#include<math.h>
#include<stdio.h>
int main()
{
	double x=10.5;
	double result = log(x);
	printf("log(%lf)= %lf\n",x,result);
	double result1= exp(x);
	printf("Exp(%lf)=%lf\n",x,result1);
	double result3=sin(x);
	printf("sin(%lf)=%lf\n",x,result3);
	double Trunc = trunc(x);
	printf("Trunc(%lf)=%lf\n",x,Trunc);
	double Ceil =ceil(x);
	printf("ceil(%lf)=%lf\n",x,Ceil);
	double Floor=floor(x);
	printf("Floor(%lf)=%lf\n",x,Floor);
	double y=-1.8;
	double Floor1=floor(y);
	printf("floor(%lf)=%lf\n",y,Floor1);
	return 0;
}

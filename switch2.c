// calculator using switch 
#include<stdio.h>
int main()
{
	char op;
	printf("Enter any operator (+,-,*,/) : ");
	scanf("%c",&op);
	double num1,num2;
	printf("Enter two numbers:");
	scanf("%lf %lf",&num1,&num2);
	switch(op)
	{
		case '+':
			{ 
				printf("%lf +%lf=%lf\n",num1,num2,num1+num2);
				break;

			}
		case '-' :
			{ 
				printf("%lf -%lf=%lf\n",num1,num2,num1-num2);
				break;

			}
		case '*' :
			{ 
				printf("%lf *%lf=%lf\n",num1,num2,num1*num2);
				break;

			}
		case '/' :
			{ 
				printf("%lf /%lf=%lf\n",num1,num2,num1/num2);
				break;

			}
		default :
			printf("Enter a invalid Operator");
	}
return 0;
}

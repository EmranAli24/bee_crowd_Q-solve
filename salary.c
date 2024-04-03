#include<stdio.h>
int main(){
	int NUMBER, Whours;
	float Amount,SALARY;

	scanf("%d%d",&NUMBER,&Whours);
	scanf("%f",&Amount);
	SALARY=(Whours*Amount);
	printf("NUMBER = %d\n",NUMBER);
	printf("SALARY = U$ %.2f\n",SALARY );
	return 0;
}

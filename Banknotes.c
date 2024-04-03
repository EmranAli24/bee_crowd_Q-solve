// beecrowd 1018
#include<stdio.h>
int main(){
	int N,r1,r2,r3,r4,r5,r6,r7,q1,q2,q3,q4,q5,q6,q7;
	scanf("%d",&N);
	r1=N%100;
	r2=r1%50;
	r3=r2%20;
	r4=r3%10;
	r5=r4%5;
	r6=r5%2;
	r7=r6%1;
	q1=N/100;
	q2=r1/50;
	q3=r2/20;
	q4=r3/10;
	q5=r4/5;
	q6=r5/2;
	q7=r6/1;

	printf("%d\n",N);
	printf("%d nota(s) de R$ 100,00\n",q1);
	
	printf("%d nota(s) de R$ 50,00\n",q2);
	printf("%d nota(s) de R$ 20,00\n",q3);
	printf("%d nota(s) de R$ 10,00\n",q4);
	printf("%d nota(s) de R$ 5,00\n",q5);
	printf("%d nota(s) de R$ 2,00\n",q6);
	printf("%d nota(s) de R$ 1,00\n",q7);
	return 0;
}

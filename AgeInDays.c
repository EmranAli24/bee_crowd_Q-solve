// beecrowd 1020
#include<stdio.h>
int main(){
	int days,q1,q2,q3,r1,r2;
	scanf("%d",&days);
	r1=days%365;
	r2=r1%30;
	q1=days/365;
	q2=r1/30;
	q3=r2;
	printf("%d ano(s)\n",q1);
	printf("%d mes(es)\n",q2);
	printf("%d dia(s)\n",q3);
	return 0;
}

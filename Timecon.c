//beecrowd 1019
#include<stdio.h>
int main(){
	int N,r1,r2,q1,q2,q3;
	scanf("%d",&N);
	r1=N%3600;
	r2=r1%60;
	q1=N/3600;
	q2=r1/60;
	q3=r2;
	printf("%d:%d:%d\n",q1,q2,q3);
	return 0;
}

//beecrowd 1046
#include<stdio.h>
int main(){
	int a,b,n;
	scanf("%d%d",&a,&b);
	n=((24-a)+b)%24;
	if(n==0)
		printf("O JOGO DUROU 24 HORA(S)\n");
	else 
		printf("O JOGO DUROU %d HORA(S)\n",n);
	return 0;
}

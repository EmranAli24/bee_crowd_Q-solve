//beecrowd 1047
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,d,diff;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	diff= ((c*60)+d)-((a*60)+b);
	if(diff<=0)
		diff+=24*60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",diff/60,diff%60);
	return 0;
}

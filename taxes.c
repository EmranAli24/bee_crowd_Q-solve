//beecrowd 1051
#include<stdio.h>
int main(){
	float a;
	scanf("%f",&a);
	if( a>=0 &&a<= 2000.0)
		printf("Isento\n");
	else if(a<=3000.0)
		printf("R$ %.2f\n",((a-2000)*.08));
	else if(a<=4500.0)
		printf("R$ %.2f\n",((a-3000)*.18+(1000*.08)));
	else if (a>=4500.0)
		printf("R$ %.2f\n",(((a-4500)*0.28) + (1500*0.18)+(1000*0.08)));
	return 0;
}

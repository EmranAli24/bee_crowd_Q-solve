#include<stdio.h>
	int main(){
		int code1,unit1,code2,unit2;

		float unitpp1,unitpp2, total;
		scanf("%d%d%f",&code1,&unit1,&unitpp1);
		scanf("%d%d%f",&code2,&unit2,&unitpp2);

		total=(unit1*unitpp1)+(unit2*unitpp2);
		printf("VALOR A PAGAR: R$ %.2f\n",total);
		return 0;
	}

#include<stdio.h>
int main(){
   	char name[20];
	double salary, Pamount, TOTAL;
	fgets(name,20,stdin);
	scanf("%lf%lf",&salary,&Pamount);
	TOTAL=salary+(Pamount*.15);
	printf("TOTAL = R$ %.2lf\n",TOTAL);
	return 0;
}

// beecrowd 1021
#include<stdio.h>
int main(){
 double N;
 int n, r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12;
 int q1,q2,q3,q4,q5,q6,q7,q8, q9,q10,q11,q12;
 scanf("%lf",&N);
 n=(N*100);
r1=n % 10000;
r2=r1 % 5000;
r3=r2 % 2000;
r4=r3 % 1000;
r5=r4 % 500;
r6=r5 % 200;
r7=r6 % 100;
r8=r7 % 50;
r9=r8 % 25;
r10=r9 % 10;
r11=r10 % 5;
r12=r11 % 1;

q1=n/10000;
q2=r1/5000;
q3=r2/2000;
q4=r3/1000;
q5=r4/500;
q6=r5/200;
q7=r6/100;
q8=r7/50;
q9=r8/25;
q10=r9/10;
q11=r10/5;
q12=r11/1;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",q1);
printf("%d nota(s) de R$ 50.00\n",q2);
printf("%d nota(s) de R$ 20.00\n",q3);
printf("%d nota(s) de R$ 10.00\n",q4);
printf("%d nota(s) de R$ 5.00\n",q5);
printf("%d nota(s) de R$ 2.00\n",q6);
printf("MOEDAS:\n");
printf("%d nota(s) de R$ 1.00\n",q7);
printf("%d nota(s) de R$ 0.50\n",q8);
printf("%d nota(s) de R$ 0.25\n",q9);
printf("%d nota(s) de R$ 0.10\n",q10);
printf("%d nota(s) de R$ 0.05\n",q11);
printf("%d nota(s) de R$ 0.01\n",q12);
return 0;
}


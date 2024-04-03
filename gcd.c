// find the gcd and lcm of two integers
#include<stdio.h>
int main()
{
int num1,num2,n1,n2,gcd,lcm,reminder;
printf("Enter two positive integers : ");
scanf("%d%d",&num1,&num2);
n1=num1;
n2=num2;
while(n2!=0)
{
reminder=n1%n2;
n1=n2;
n2=reminder;
}
gcd=n1;
lcm=(num1*num2)/gcd;
printf("GCD of %d and %d is : %d\n",num1,num2,gcd);
printf("LCM of %d and %d is : %d\n",num1,num2,lcm);
return 0;
}

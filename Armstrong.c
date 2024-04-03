// check Armstrong number of n digits.
#include<math.h>
#include<stdio.h>
int main()
{
int num, Orinum,r,n=0;
float result=0.0;
printf("Enter an integer:");
scanf("%d",&num);
Orinum=num;
//store the number of digits of number in n
for(Orinum=num;Orinum!=0;++n)
{
Orinum/=10;
}
for(Orinum=num;Orinum!=0;Orinum/=10)
{
r=Orinum%10;
result+=pow(r,n);
}
if((int)result==num)
	printf("%d is a Armstrong number.\n",num);
else
	printf("%d is not a Armstrong number.\n",num);
return 0;

}

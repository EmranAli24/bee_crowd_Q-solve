//Sum of 10 numbers using array
#include<stdio.h>
int main()
{
int a[10],sum=0,i;
printf("Enter ten numbers : ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("Ten numbers are : ");
for(i=0;i<10;i++)
{
printf("%d ",a[i]);
}
printf("\n");
for(i=0;i<10;i++)
{
sum+=a[i];
}
printf("The sum of ten numbers is :%d\n",sum);
printf("The average is : %.2f\n",(float)sum/10);
return 0;
}

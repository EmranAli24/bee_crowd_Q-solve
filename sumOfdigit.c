// A program that read any positive integer and display sum of digits.
#include<stdio.h>
int main()
{
	int num,temp,r,sum=0;
	printf("Enter any positive number:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+r;
		temp=temp/10;
	}
	printf("The sum of the digits:%d\n",sum);
	return 0;
}

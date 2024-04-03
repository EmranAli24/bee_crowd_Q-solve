//check an integer is palindrome or not.
#include<stdio.h>
int main()
{
	int num,temp,r,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum*10+r;
		temp=temp/10;
	}
	if(num==sum)
		printf("%d is a palindrome\n",num);
	else
		printf("%d is not a palindrome\n",num);
	return 0;
}

//Write a program that can take some numbers and display the maximum and minimum 
#include<stdio.h>
int main()
{
int num[10],n,i;
printf("How many numbers you want to enter : ");
scanf("%d",&n);
printf("Enter %d numbers : ",n);
for(i=0;i<n;i++)
{
	scanf("%d",&num[i]);
}
printf("Entered numbers are : \n");
for(i=0;i<n;i++)
{
	printf("%d ",num[i]);
}
printf("\n");
int max = num[0];
for(i=0;i<n;i++)
{
if(max<num[i])
	max=num[i];
}
printf("Maximum number is %d\n",max);
int min = num[0];
for(i=0;i<n;i++)
{
if(min>num[i])
	min=num[i];
}
printf("Minimum number is %d\n",min);

return 0;
}


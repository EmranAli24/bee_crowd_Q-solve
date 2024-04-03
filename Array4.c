//Fibonacci series using array ( 0 1 1 2 3 5 8 13 .....)
#include<stdio.h>
int main()
{
	int a[30],n,i;
	printf("How many numbers you want to enter : ");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]= a[i-1]+a[i-2];
	}
	printf("\n");
	printf("Fibonacci series : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

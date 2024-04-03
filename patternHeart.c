// print a pattern of a heart
#include<stdio.h>
int main()
{
	int n,row,col,j=3;
	printf("Enter the number of row: ");
	scanf("%d",&n);
	for(row=(n/2)-1;row<=n/2;row++)
	{

		for(col=1;col<=n/2-row;col++)
			printf(" ");
		for(col=1;col<=2*row-1;col++)
          	printf("*");

		for(col=1;col<=j;col++)
			printf(" ");
		for(col=1;col<=2*row-1;col++)

			printf("*");



		printf("\n");
j=1;
	}

	for(row=n;row>=1;row--)
	{
		for(col=1;col<=n-row;col++)
			printf(" ");
		for(col=1;col<=2*row-1;col++)
			printf("*");
		printf("\n");

	}
	return 0;
}

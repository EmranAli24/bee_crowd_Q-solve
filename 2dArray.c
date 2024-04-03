#include<stdio.h>
int main ()
{
	/*2D array declaration*/
	int disp [2][3];
	for (int i=0;i<2;i++)
	{
		for(int j=0; j<3;j++)
		{
			printf("Enter the value for disp [%d] [%d]: ",i,j);
			scanf("%d",&disp[i] [j]);
		}

	}

	for (int i=0;i<2;i++)
	{
		for(int j=0; j<3;j++)
		{
			printf("%d",disp[i][j]);

		}
		printf("\n");

	}

	return 0;

}

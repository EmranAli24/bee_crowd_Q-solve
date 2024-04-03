#include<stdio.h>
int main ()
{
/*2D array declaration*/
int disp [2][2];
for (int i=0;i<2;i++)
{
for(int j=0; j<2;j++)
	{
		printf("Enter the value for disp [%d] [%d]: ",i,j);
		scanf("%d",&disp[i] [j]);
	}

}
printf("Matrix : \n");
for (int i=0;i<2;i++)
{
for(int j=0; j<2;j++)
	{
		printf("%d  ",disp[i][j]);
		
	
	}
	printf("\n");

}
printf("Transpose Matrix :  \n);
for (int i=0;i<2;i++)
{
for(int j=0; j<2;j++)
	{
		printf(" %d  ",disp[j][i]);
	
	
	}
	printf("\n");

}

return 0;

}

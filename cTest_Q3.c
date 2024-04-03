#include<stdio.h>
int main(){

	int i,j,row,col;
printf("Enter row number :\n");
scanf("%d",&row);
printf("Enter col number:\n")
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{ 

		  if ( i==2 && j== 2)
				printf("* ");
				else if (i==1 && j==4)
					printf("-1 ");
					else if( i==2 && j==3)
						printf("-1 ");

		else if(j+i== 4)
				printf("0 ");
			else if((i==2 && j==0) || (i==2 && j==4))
				printf("  ");

			else if((j==1||j==2||j==3||j==4) && i==4)
				printf("-1 ");
		//	else if ( i==2 && j== 2)
			//	printf("* ");
			else if ((i==3)&&(j==2||j==3||j==4))
				printf("-1 ");
			else	
				printf("1 ");
		}
		printf("\n");
	}
	return 0;
}

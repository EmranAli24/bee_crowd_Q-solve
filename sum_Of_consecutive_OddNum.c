//beecrowd 1071

#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int num1,num2,sum=0;
	//printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);

	
	if(num1>num2)
	{
		for(int i=num2+1;i<num1;i++)
		{
			if(i%2!=0)
			{

				sum=sum+i;
			}
		}
	}

	if(num1<=num2) 
	{
		for(int i=num1+1;i<num2;i++)
		{
			if(i%2!=0)
			{
				sum=sum+i;
			}
		}
	}

	printf("%d\n",sum);
	return 0;
}



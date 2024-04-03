#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	int even=0,odd=0,positive=0,negative=0;

	//printf("Enter five integers: ");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

	int a[5]={ num1,num2,num3,num4,num5};

	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}

		if(a[i]%2!=0)
		{
			odd++;
		}

		if(a[i]<0)
		{
			negative++;
		}

		if(a[i]>0)
		{
			positive++;
		}
	}

	printf("%d valor(es) par(es)\n",even);
	printf("%d valor(es) impar(es)\n",odd);
	printf("%d valor(es) positivo(s)\n",positive);
	printf("%d valor(es) negativo(s)\n",negative);

	return 0;
}

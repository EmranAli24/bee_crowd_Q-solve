//beecrowd 1066
#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	int count1=0,count2=0;

	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	int a[5]={ num1,num2,num3,num4,num5};

	for(int i=0;i<5;i++)
	{
		if(a[i]>=0)
		{
			count1++;
			if(a[i]==0)
			{
				count1--;
			}
		}

	}
	
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			count2++;
		}
	}

printf("%d valor(es)  par(es)\n",count2);
printf("%d valor(es) impar(es)\n",5-count2);
printf("%d valor(es)  positivo(s)\n",count1);
printf("%d valor(es)  negativo(s)\n",5-count1);

return 0;
}

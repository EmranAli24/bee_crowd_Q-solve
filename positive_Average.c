#include<stdio.h>
int main()
{
	float a[6],sum=0;
	int count=0;

	for(int i=0;i<6;i++)
	{
		scanf("%f",&a[i]);
	}

	/*for(int i=0;i<6;i++)
	{
		printf("%f\n",a[i]);
	}*/

	for(int i=0;i<6;i++)
	{
		if(a[i]>0)
		{ 
			count++;
			sum=sum+a[i];
		}
	}

	printf("%d valores positivos\n",count);
	printf("%.1f\n",(sum/count));

	return 0;
}

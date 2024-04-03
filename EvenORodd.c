//beecrowd 1074

#include<stdio.h>
int main()
{
	int N;
	//printf("number of testcase:");
	scanf("%d",&N);

//	int oddneg,oddpos,evenNeg,evenPos;
	int a[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<N;i++)
	{
		if(a[i]%2==0 && a[i]<0)
		{
			printf("EVEN NEGATIVE\n");
		}
		
		if(a[i]%2!=0 && a[i]<0)
		{
			printf("ODD NEGATIVE\n");
		}

		if(a[i]==0)
		{
			printf("NULL\n");
		}

		if(a[i]%2==0 && a[i]>0)
		{
			printf("EVEN POSITIVE\n");
		}

		if(a[i]%2!=0 && a[i]>0)
		{
			printf("ODD POSITIVE\n");
		}
	}

	return 0;
}

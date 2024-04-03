//beecrowd 1072

#include<stdio.h>
int main()
{
	int N,count=0;
	//printf("Enter the number of test case: ");
	scanf("%d",&N);

	int a[N];
	
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<N;i++)
	{
		if(a[i]>=10 && a[i]<=20)
		{
			count++;
		}
	}

	printf("%d in\n",count);
	printf("%d out\n",(N-count));

	return 0;
}

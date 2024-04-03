//beecrowd 1073
#include<stdio.h>
int main()
{
	int N;
	//printf("Enter an positive integer: ");
	scanf("%d",&N);

	for(int i=1;i<=N;i++)
	{
		if(i%2==0)
		{
			printf("%d^%d = %d\n",i,2,(i*i));
		}
	}
	return 0;
}

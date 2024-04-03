//beecrowd1075

#include<stdio.h>
int main()
{
	int n;
	//printf("Enter a positive integer: ");
	scanf("%d",&n);

	for(int i=1;i<=10000;i++)
	{
		if(i%13==2)
		{
			printf("%d\n",i);
		}
	}
return 0;
}


//beecrowd 1099

#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter testcase: ");
	scanf("%d",&n);
	
	int a1[n],a2[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &a1[i],&a2[i]);
	}

	for(int i=0;i<n;i++)
	{
		if(a1[i]==a2[i])
			printf("0\n");
		
		 if(a1[i]>a2[i])
		{
			for( int i=a1[i]; i>a2[i];i--)
			{
				if((i-1)%2!=0)
				{ 
					sum+=(i-1);
				}
			}
		}

	if(a1[i]<a2[i])	
		{
			for(int i=a1[i];i<a2[i];i++)
			{
				if((i+1)%2!=0)
				{
					sum+=(i+1);
				}
			}
		}
	}
	return 0;
}

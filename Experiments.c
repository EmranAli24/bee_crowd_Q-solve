//beecrowd 1094

#include<stdio.h>
int main()
{
	int N,rat=0,frog=0,rabbit=0,total=0;
	//printf("Enter testcase:");
	scanf("%d",&N);

	int a[N];
	char s[N];

	for(int i=0;i<N;i++)
	{
		scanf("%d %c",&a[i],&s[i]);
	}

	for(int i=0;i<N;i++)
	{
		if(s[i]=='C')
		{
			rabbit+=a[i];
		}

		if(s[i]=='R')
                {
                        rat+=a[i];
                }

		if(s[i]=='S')
                {
                        frog+=a[i];
                }
	
	}

	total= rabbit + rat + frog;

	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",rabbit);
	printf("Total de ratos: %d\n",rat);
	printf("Total de sapos: %d\n",frog);
	printf("Percentual de coelhos: %.2f %%\n",((float)(rabbit*100)/total));
	printf("Percentual de ratos: %.2f %%\n",((float)(rat*100)/total));
	printf("Percentual de sapos: %.2f %%\n",((float)(frog*100)/total));

	return 0;
}










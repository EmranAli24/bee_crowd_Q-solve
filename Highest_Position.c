//beecrowed 1080

#include<stdio.h>
int main()
{
	int a[100],value=0,posi=0;

	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<100;i++)
	{
		if(a[i]>value)
		{
			value=a[i];
			posi=i+1;
		}
	}

	printf("%d\n",value);
	printf("%d\n",posi);

return 0;
}

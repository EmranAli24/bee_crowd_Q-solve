//beecrowd 1065
#include<stdio.h>
int main(){

	//	int n1,n2,n3,n4,n5;
	int count=0;
	//	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

	int a[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<5;i++)
	{ 
		if(a[i]%2==0)
		{
			count++;
		}
	}

	printf("%d valores pares\n",count);

	return 0;
}



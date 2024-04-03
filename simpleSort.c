//beecrowd 1042
#include<stdio.h>
int main(){
	int a,b,c,A[3],temp;
	scanf("%d%d%d",&a,&b,&c);
	A[0]=a;
	A[1]=b;
	A[2]=c;

	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{
		if(A[j]>A[j+1])
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;

		}
	}
}
 for(int i=0;i<3;i++)
	{
		printf("%d\n",A[i]);
	}
printf("\n");
printf("%d\n%d\n%d\n",a,b,c);
return 0;
}



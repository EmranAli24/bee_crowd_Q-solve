//beecrowd 1079

#include<stdio.h>
int main()
{
	int N;
	//printf("Enter testcase: ");
	scanf("%d",&N);

	float a1[N],a2[N],a3[N],avg=0;
	
	for(int i=0;i<N;i++)
	{
		scanf("%f %f %f",&a1[i],&a2[i],&a3[i]);
	}
	
	for(int i=0;i<N;i++)
	{
		avg= (2*a1[i]+3*a2[i]+5*a3[i])/10;
		printf("%.1f\n",avg);
		avg=0;
	}

	return 0;



}


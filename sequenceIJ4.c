//beecrowd 1098

#include<stdio.h>
int main()
{
	float k=1.0,i,j;

	for(i=0;i<=2.2;i+=.2)
	{
		for(j=k;j<=k+2;j++)
		{
			if((i>0 && i<1)||(i>1 && i<2)||(i>2.1 && i<2.2))
			printf("I=%.1f J=%.1f \n",i,j);
			else
			printf("I=%d J=%d \n",(int)i,(int)j);
		}
		k+=.2;
	}

	return 0;
}

#include<stdio.h>

void exchange(int *a,int *b);
int main()
{
	int x=100,y=50;
	exchange(&x,&y);

	printf("After exchanging the value of x = %d and y = %d\n",x,y);
}

void exchange(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

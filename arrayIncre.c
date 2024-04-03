#include<stdio.h>
int main()
{
	int i,j,m,a[5]={ 5,1,15,20,25};

	i= ++a[1];
	j= a[1]++;
	m= a[i++];

	printf("%d %d %d\n",i,j,m);
}

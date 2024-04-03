#include<stdio.h>
int Check(int x)
{
	int value;
	if(x==1)
	{
		value = 1;
	}
	else if ( x==2)
	{
		value = 1;
	}
	else if ( x==6)
	{
		value = 1;
	}
	else if ( x==21)
	{
		value = 1;
	}
	else if ( x==88)
	{
		value = 1;
	}
	else if ( x==445)
	{
		value = 1;
	}
	else
	{ 
		value = 0;
	}

	return value;
}


int main(){
	int n;

	printf("Enter the  number:\n");
	scanf("%d",&n);

	int result = Check(n);
	printf("Return value is %d\n",result);
	return 0;
}

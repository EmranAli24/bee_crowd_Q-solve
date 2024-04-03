//C.T question set B question 1
#include<stdio.h>
int main(){
	int TempHigh,TempMin,Humidity,RainFall,Sunshine,count=0;
	scanf("%d%d%d%d%d",&TempHigh,&TempMin,&Humidity,&RainFall,&Sunshine);
	if(TempHigh>=31 && TempHigh<=34)
	{
		count++;
	}
	if(TempMin>=22 && TempMin<=23)
	{
		count++;
	}
	if(Humidity>=89 && Humidity<=92)
	{
		count++;
	}
	if(RainFall>=0 && RainFall<=10)
	{
		count++;
	}

	if(Sunshine>=6 && Sunshine<=9)
	{
		count++;
	}
	if(count>3)
		printf("High\n");
	else if (count==3)
		printf("Moderate\n");
	else 
		printf("No\n");
	return 0;
}




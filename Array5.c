//Searching a number using array 
#include<stdio.h>
int main()
{
	int num[]={10,2, 23,15,3,43,6,20,4,70};
	int item,position,i;
	printf("Enter the item you want to find : ");
	scanf("%d",&item);
	for(i=0;i<10;i++)
	{
		if(item==num[i])
		{
			position = i+1;
			break;
		}
		else 
			position=-1;
	}
	if(position==-1)
		printf("Item is not found");
	else 
		printf("Item is found at %d position ",position);
	printf("\n");
	printf("Following numbers are in the array :\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}

#include<stdio.h>
int main ()
{
int n,row,col;
printf("Enter the number of row : ");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
//printing space
for(col=1;col<=n-row;col++)
{ 
printf(" ");
}
//printing number
for(col=1;col<=row;col++)
{
printf("%d",col);
}
printf("\n");
}

return 0;

}

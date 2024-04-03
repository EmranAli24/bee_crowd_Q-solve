#include<stdio.h>
int main(){
	int row,col,i,j;
	printf("Enter the row & col number : ");
	scanf("%d%d",&row,&col);
	
		if(row==1||2||3||4||5||6&&col==2||3||4||5)
			printf("(%d,%d)is placed inside the rectangle\n",row,col);
			else
			printf("(%d,%d)is placed outside  the rectangle\n",row,col);

	
		return 0;
}

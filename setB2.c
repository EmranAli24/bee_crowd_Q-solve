// C.T question set B question 1
#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	float D;
	printf("Input value (x,y):");
	scanf("%d%d",&x,&y);
	D=sqrt((x-5)*(x-5)+(y-7)*(y-7));
	if(D>7)
		printf("(%d,%d) is placed outside the circle",x,y);
	else 
		printf("(%d,%d) is placed inside the circle",x,y);
	return 0;
}


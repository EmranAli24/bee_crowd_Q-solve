#include<stdio.h>
#include<math.h>
int main(){
	double x1,x2,y1,y2,r;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	r=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%.4lf\n",r);
	return 0;
}

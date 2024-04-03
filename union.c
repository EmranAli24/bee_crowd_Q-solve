/* with unions, we can only store information in one field at once*/
#include<stdio.h>
union job{
	float salary;
	int workerNo;
} j;
int main(){
	j.salary = 12.3;
	// when j.workerNo is assigned a value,
	// j,salary will no longer hold 12,3
	j.workerNo = 100;
	printf("Salary = %.1f\n", j.salary);
	printf("Number of workers = %d\n", j.workerNo);
	return 0;
}
//output : salary = 0.0,workerNo=100;

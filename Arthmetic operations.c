#include<stdio.h>
void main()
{
	int A = 46,B= 20,C=A+B,D=A-B,E=A*B, G=A%B;
	float F=A*1.0/B;
	printf("sum of %ld and %ld is %ld\n",A,B,C);
	printf("differnce of %ld & %id is %ld\n",A,B,D);
	printf("Product od %ld & %ld is %ld\n",A,B,E);
	printf("Division of  %ld & %ld is %f\n",A,B,F);
	printf("Module Reminder of %ld & %ld is %d",A,B,G);
}

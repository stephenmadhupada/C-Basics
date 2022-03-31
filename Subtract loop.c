#include<stdio.h>
int main()
{
	int r,n,sum=0;
	scanf("%d",&n);
	int m=n;
	while (n>0)
	{
		r=n%10;
		sum = sum + r;
		n=n/10;
	}
	int pro =1;
	while (m>0)
	{
		r=m%10;
		pro = pro*r;
		m=m/10;
	}
	printf("%d",pro-sum);
}


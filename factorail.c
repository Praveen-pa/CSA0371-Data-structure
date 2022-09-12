#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	f=f*i;
}
	printf("factorial value is %d",f);
	return 0;
}

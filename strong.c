#include<stdio.h>
void main()
{
	int x,i,sum=0,n;
	scanf("%d",&x);
	n=x;
	while(n!=0)
	{
		i=n%10;
		sum+=fact(i);
		n/=10;
	}
	if(sum==x)
	printf("Strong number\n");
	else
	printf("Not strong number\n");
}
int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	f*=i;
	return f;
}

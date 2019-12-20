#include<stdio.h>
int l=0;
int power(int x)
{
	int i,p=1;
	for(i=0;i<l;i++)
	p*=x;
	return p;
}
void main()
{
	int x,n,sum=0,r;
	scanf("%d",&x);
	n=x;
	while(n!=0)
	{
		n/=10;
		l++;
	}
	n=x;
	while(n!=0)
	{
		r=n%10;
		n/=10;
		sum=sum+power(r);	
	}
	if(sum==x)
	printf("Armstrong number\n");
	else
	printf("Not armstrong number\n");
}

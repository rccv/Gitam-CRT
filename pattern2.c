#include<stdio.h>
int main()
{
	int n,i,t=7;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",t);
		if(i%2==0)
		t+=3;
		else
		t-=2;
	}
}

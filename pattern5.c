#include<stdio.h>
int main()
{
	int n,i,a=8,b=2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",10*a);
			a--;
		}
		else
		{
			printf("%d ",5*b);
			b++;
		}
	}
	return 0;
}

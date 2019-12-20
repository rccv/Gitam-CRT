#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n>=5 && n<=10)
	{
		for(i=n;i>=1;i--)
		{
			for(j=i;j<=n;j++)
			printf("%d",j);
			printf("\n");
		}
	}
}

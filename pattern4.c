#include<stdio.h>
int main()
{
	int n,s=8,res,i;
	scanf("%d",&n);
	printf("8 ");
	for(i=1;i<=n;i++)
	{
		res=i*(((s)*i)-(i+1));
		printf("%d ",res);
		s=res;
	}
}

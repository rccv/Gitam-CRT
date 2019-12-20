#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n>=5&&n<=10){
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(i*2)-1;j+=2)
		printf("%d",j);
		for(j=(i-1)*2-1;j>=1;j-=2)
		printf("%d",j);
		printf("\n");
	}
}
}

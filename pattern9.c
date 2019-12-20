#include<stdio.h>
void main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	if(n>=5&&n<=10){
		printf("*\n");
	for(i=1;i<=n;i++)
	{
		printf("*");
		for(j=1;j<=(i*2)-1;j+=2)
		printf("%d",j);
		for(j=(i-1)*2-1;j>=1;j-=2)
		printf("%d",j);
		printf("*\n");
	}
	for(j=1;j<=i;j++)
	printf("**");
}
}

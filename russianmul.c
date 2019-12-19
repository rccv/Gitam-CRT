#include<stdio.h>
void main()
{
	int x,y,sum=0;
	scanf("%d %d",&x,&y);
	printf("%d\t%d\n",x,y);
	while(x/2>=1)
	{
		if(x%2!=0)
		sum+=y;
		x/=2;
		y*=2;
		printf("%d\t%d\n",x,y);
	}
	printf("Answer : %d",sum+y);
}

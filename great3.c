#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(y>x)
	x=y;
	scanf("%d",&y);
	if(y>x)
	x=y;
	printf("%d",x);
}

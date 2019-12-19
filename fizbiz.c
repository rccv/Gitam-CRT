#include<stdio.h>
void main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0&&x%5==0)
	printf("FIZZBIZZ");
	else if(x%3==0)
	printf("FIZZ");
	else if(x%5==0)
	printf("BIZZ");
	else
	printf("no");
}

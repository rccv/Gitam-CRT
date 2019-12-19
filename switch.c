#include<stdio.h>
void main()
{
	int x,a,b;
	printf("1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\n");
	scanf("%d",&x);
	if(x>0&&x<=5)
	{
		printf("Enter two numbers\n");
		scanf("%d %d",&a,&b);
		switch(x)
		{
			case 1:printf("%d",a+b);
			break;
			case 2:printf("%d",a-b);
			break;
			case 3:printf("%d",a*b);
			break;
			case 4:printf("%d",a/b);
			break;
			default:printf("%d",a%b);
		}
	}
	else
	printf("invalid option\n");
}

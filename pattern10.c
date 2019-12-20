#include<stdio.h>
int l=0;
void func(int x)
{
	int n,i;
	switch(x)
	{
		case 0:printf("zero ");
		break;
		case 1:printf("one ");
		break;
		case 2:printf("two ");
		break;
		case 3:printf("three ");
		break;
		case 4:printf("four ");
		break;
		case 5:printf("five ");
		break;
		case 6:printf("six ");
		break;
		case 7:printf("seven ");
		break;
		case 8:printf("eight ");
		break;
		case 9:printf("nine ");
		break;
		case 10:printf("ten ");
		break;
		case 11:printf("eleven ");
		break;
		case 12:printf("twelve ");
		break;
		case 13:printf("thirteen ");
		break;
		case 14:printf("fourteen ");
		break;
		case 15:printf("fifteen ");
		break;
		case 16:printf("sixteen ");
		break;
		case 17:printf("seventeen ");
		break;
		case 18:printf("eighteen ");
		break;
		case 19:printf("ninteen ");
		break;
		case 20:printf("twenty ");
		break;
		case 30:printf("thirty ");
		break;
		case 40:printf("fourty ");
		break;
		case 50:printf("fifty ");
		break;
		case 60:printf("sixty ");
		break;
		case 70:printf("seventy ");
		break;
		case 80:printf("eightty ");
		break;
		case 90:printf("ninty ");
		break;
		case 100:printf("hundred ");
		break;
		case 1000:printf("thousand ");
		break;
		default:
		if(x>100)
		{
			n=(x/100);
			func(n);
			if(x%100==0)
			printf("hundred");
			else
			printf("hundred and ");
			n=x%100;
			func(n);
		}
		else if(x>20)
		{
			n=x%10;
			x=(x/10)*10;
			func(x);
			func(n);
		}	
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	if(n<0)
	printf("Minus ");
	n=pos(n);
	func(n);
}
int pos(int x)
{
	if(x>=0)
	return x;
	else
	return -x;
}

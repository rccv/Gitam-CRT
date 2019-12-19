#include<stdio.h>
void main()
{
	int c,b=1000,p=1234,t;
	printf("Enter pin\n");
		scanf("%d",&t);
		if(t==p)
		{
	while(1)
	{
		
		printf("1.Display Balance\n2.Amount to deposit\n3.Withdraw\n4.Exit\nEnter your choice\n");
		scanf("%d",&c);
		if(c>=1&&c<4)
		{
		switch(c)
		{
			case 1:printf("Balance is: %d\n\n",b);
			break;
			case 2:printf("Enter amount to deposit\n");
			scanf("%d",&t);
			if(t%100==0)
			{
			b+=t;
			printf("Balance updated : %d\n\n",b);
			}
			else
			printf("Error\n\n");
			break;
			case 3:printf("Enter amount to withdraw\n");
			scanf("%d",&t);
			if((b-t)<500)
			printf("Low balance\nAmount goes to : %d\n\n",b-t);
			else
			{
			b-=t;
			printf("Balance updated : %d\n\n",b);
			}
			break;
		}
	}
	else if(c==4)
	{
		printf("Thank you\n\n");
		exit(0);
	}
	else
	printf("Invalid choice\n\n");
	}
	}
	else
	printf("Invalid pin\n\n");
}

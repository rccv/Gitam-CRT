#include<stdio.h>
#include<string.h>
void main()
{
	int l,c=0,i;
	char a[10];
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l/2;i++)
	{
	if(a[i]!=a[l-i-1])
	{
		c=1;
		break;
	}
	}
	c==0?printf("Palindrome"):printf("Not Palindrome");
}

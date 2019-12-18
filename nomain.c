#include<stdio.h>
#define fun main
void fun()
{
	int a,b;
	printf("Name\n");
	scanf("%d %d",&a,&b);
	printf("%d",a+(~b+1));
}


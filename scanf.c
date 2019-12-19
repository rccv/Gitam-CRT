#include<stdio.h>
int main()
{
	char name[30];
	puts("Enter your name");
	scanf("%[^\n]s",&name);
	puts("Your name is ");
	puts(name);
	return 0;
}

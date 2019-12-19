#include<stdio.h>
int main()
{
	char ch;
	puts("Enter a character");
	ch=getc(stdin);
	fflush(stdin);
	puts("The entered character is ");
	putc(ch,stdout);
	return 0;
}

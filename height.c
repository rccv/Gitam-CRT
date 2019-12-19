#include<stdio.h>
void main()
{
	int x;
	printf("Enter height: ");
	scanf("%d",&x);
	if(x<150)
	printf("Dwarf\n");
	else
	{
		if(x>190)
		printf("Abnormal height\n");
		else if(x>165)
		printf("Tall\n");
		else
		printf("Average height\n");
	}
}

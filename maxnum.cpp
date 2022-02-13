#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter two numbers\n");
	scanf("%d %d",&x,&y);
	if(x>y)
	printf("%d is maximum num",x);
	else
	printf("%d is maximum num",y);
}
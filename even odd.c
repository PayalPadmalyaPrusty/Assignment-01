#include<stdio.h>
void main()
{
	int x;
	printf("Please enter a number\n");
	scanf("%d",&x);
	switch(x%2)
	{
		case 0:
			printf("%d is an even number\n",x);
			break;
			case 1:
				printf("%d is an odd number\n",x);
				break;
	}
	
}
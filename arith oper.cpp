#include<stdio.h>
int main()
{
	int x,y,choice;
	printf("1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
	printf("Enter two numbers\n");
	scanf("%d %d",&x,&y);
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Addition of %d and %d is %d\n",x,y,x+y);
			break;
			case 2:
				printf("Subtraction of %d and %d is %d\n",x,y,x-y);
				break;
				case 3:
					printf("Multiplication of %d and %d is %d\n",x,y,x*y);
					break;
					case 4:
						printf("Division of %d and %d is %d\n",x,y,x/y);
						break;
	}
	return 0;
	
}
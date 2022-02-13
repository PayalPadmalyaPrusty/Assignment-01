#include<stdio.h>
#define PI 3.14
void main()
{
	float r,d,a,p;
	printf("Enter radius");
	scanf("%f",&r);
	d=2*r;
	printf("Diameter is %f",d);
	a=PI*r*r;
	printf("Area is %f",a);
	p=2*PI*r;
	printf("Perimeter is %f",p);
	
}
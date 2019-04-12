#include<stdio.h>
void main()
{
	float u,a,t,d;
	printf("Enter value of t:");
	scanf("%f",&t);
	printf("Enter values of u and a");
	scanf("%f%f",&u,&a);
	d=(u*t)+(0.5*t*t);
	printf("Distance is %f",d);
}

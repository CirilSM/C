#include<stdio.h>
void main()
{
	int sum,h,a;
	printf("ENTER A NUMBER");
	scanf("%d",&a);
	int y=a;
	while(a>0)
	{
		h=a%10;
		sum=sum+(h*h*h);
		a=a/10;
	}
	if(sum==y)
		printf("ARMSTRONG");
	else
		printf("NOT ARMSSTRONG");
}
	

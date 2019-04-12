#include<stdio.h>
void main()
{
	int a,h,n,rev=0;
	printf("ENTER THE NUMBER");
	scanf("%d",&a);
	n=a;
	while(a>0)
	{
		h=a%10;
		rev=(rev*10)+h;
		a=a/10;
	}
	printf("%d",rev);
	if(n==rev)
	{
		printf("\nTHE NUMBER IS PALINDROME");
	}
	else
	{
		printf("\nTHE NUMBER IS NOT PALINDROME");
	}
}
		
		

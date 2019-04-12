#include<stdio.h>
void main()
{
	int l,in,ins;
	printf("Enter the No Of Entries");
	scanf("%d",&l);
	int ar [20];
	for(int i=0;i<l;i++)
	{
		printf("Enter element :");
		scanf("%d",&ar[i]);
	}
	printf("Enter the Index and Insertion Value");
	scanf("%d%d",&in,&ins);
	for(int i=l;i>=in;--i)
	{	
		if(i==in)
		{
			ar[in]=ins;
			break;
		}
		ar[i]=ar[i-1];
	}
	for(int i=0;i<=l;i++)
	{
		printf("%d",ar[i]);
	}
}

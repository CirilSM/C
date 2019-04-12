#include<stdio.h>
void main()
{
	int n,max,min;
	printf("Enter the length");
	scanf("%d",&n);
	int ar[n];
	printf("ENTER THE ELEMENTS");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	min=ar[0];
	max=ar[0];
	for(int k=0;k<n;k++)
	{
		if(ar[k]<min)
			min=ar[k];
		else
			max=ar[k];
	}
	printf("MAXIMUM AND MINIMUM IS %d and %d",max,min);
}

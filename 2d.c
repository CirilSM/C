#include<stdio.h>
void main()
{
 	int n,l,i,j,sum=0;
	printf("Enter the value of n for a nxn matrix:");
	scanf("%d",&n);
	int ar[n][n];
	int ar2[n][n];
	int ar3[n][n];
	printf("Enter the elements Row wise");
	//Matrix reading
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&ar[i][j]);

	printf("1.MATRIX ADDITION\n2.SUM OF DIAGONAL ELEMENTS\n3.TRANSPOSE");
	scanf("%d",&l);
	switch(l)
	{
		case 1:	printf("Enter the elements Row wise");
			//Matrix reading
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					scanf("%d",&ar2[i][j]);
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					ar3[i][j]=ar[i][j]+ar2[i][j];
			for(i=0;i<n;i++)//printing matrix
			{
				for(j=0;j<n;j++)
					printf(" %d ",ar3[i][j]);
			printf("\n");
			}
			break;
		case 2:for(i=0;i<n;i++)
				sum+=ar[i][i];
			printf("Sum is %d",sum);
			break;
		case 3:	for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					ar2[i][j]=ar[j][i];
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					printf("%d",ar2[i][j]);
			printf("\n");
			}
			break;
		default:printf("INVALID INPUT");;
	}
}
	
		
			

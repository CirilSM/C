#include<stdio.h>
void main()
{
	int s,e,flag;
	printf("ENTER THE START AND END ");
	scanf("%d%d",&s,&e);
	for(int i=s;i<=e;++i)
	{	flag=0;
		for(int j=2;j<i;j++)
		{
		if(i%j==0)
		{
			flag=1;
			break;
		}
		}
	if(flag==0)
		printf("%d ",i);
	}
}

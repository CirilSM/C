#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],d;
	int count=0;
	printf("ENTER THE STRING");
	scanf("%s",str);
	printf("\nENTER THE CHARACTER");
	scanf("%s",&d);
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==d)
			count++;
	}
	printf("%d",count);
}
				
	
	

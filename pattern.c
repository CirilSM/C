#include<stdio.h>
void main()
{
char ch;
for(int i=1;i<=5;i++)
{
	if(i%2==0)
	ch='*';
	else
	ch='0';
	for(int j=1;j<=i;j++)
		printf ("%c",ch);
       	printf("\n");
}
}

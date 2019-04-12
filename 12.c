#include<stdio.h>
void main()
{
int b,c;
float temp;
char ch,d;
do
{
printf("\n1:ADD \n 2:SUBTRACT \n 3:DIVIDE \n 4:MULTIPLY");
printf("\nENTER CHOICE");
scanf("%c",&ch);
printf("\nENTER THE TWO INPUTS");
scanf("%d%d",&b,&c);
switch(ch)
{
case '+':
{
temp=b+c;
printf("%f",temp);
break;
}
case '-': 
{
temp=b-c;
printf("%f",temp);
break;
}
case '*':
{
temp=b/c;
printf("%f",temp);
break;
}
case '/':
{
temp=b*c;
printf("%f",temp);
break;
}
}
printf("DO you wish to try again?");
scanf("%c",&d);
}while(d=='y');//do...while
}

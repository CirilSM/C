#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("ENTER VALUFE OF A B AND C :");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("AREA OF THE CIRCLE IS %f",area);
}

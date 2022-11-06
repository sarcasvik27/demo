//max and smax of three
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,max,smax;
	printf("Enter the Number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		max=a;
		smax=b;
	}
	else
	{
		max=b;
		smax=a;
	}
	if(c>max)
	{
		smax=max;
		max=c;
	}
	else if(c>smax)
	{
		smax=c;
	}
	if(d>max)
	{
		smax=max;
		max=d;
	}
	else if (d>smax)
	{
		smax=d;
	}
  printf("%d   %d",max,smax);
	return 0;
		
}

//only if max of 4
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,max;
	printf("Enter the Number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	if(d>max)
	max=d;
	printf("%d is max of all",max);
	return 0;
		
		
}

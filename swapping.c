#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("ENTER THE 2 VALUES");
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("THE RESULT IS %d %d",a,b);
	getch();
	return 0;
}

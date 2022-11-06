/* 
1
22
333
4444
55555*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("ENTER ANY NUMBER");
	scanf("%d",&x);
	for(y=1;y<=x;y++)
	{
	for(z=y;z>=1;z--)	
	{
		printf("%d",y);
	}
		printf("\n");
	}


	getch();
	return 0;
}

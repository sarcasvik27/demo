/* 
1
21
321
4321
53321*/
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
		printf("%d",z);
	}
		printf("\n");
	}


	getch();
	return 0;
}

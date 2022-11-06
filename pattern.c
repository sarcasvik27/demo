/* 
1
12
123
1234
12345*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("ENTER ANY NUMBER");
	scanf("%d",&x);
	for(y=1;y<=x;y++)
	{
	for(z=1;z<=y;z++)	
	{
		printf("%d",z);
	}
		printf("\n");
	}


	getch();
	return 0;
}

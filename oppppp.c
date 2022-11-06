/* 
5
45
345
2345
12345 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("ENTER ANY NUMBER");
	scanf("%d",&x);
	for(y=x;y>=1;y--)
	{
		for(z=y;z<=x;z++)
	
	{
		printf("%d",z);
	
	}
		printf("\n");
}


	getch();
	return 0;
}

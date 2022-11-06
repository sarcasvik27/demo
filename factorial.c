#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z=1;
	printf("ENTER ANY NUMBER");
	scanf("%d",&x);
	for(y=x;y>=1;y--)
	{
		z=z*y;
		
	}
	printf("THE FACTORIAL IS %d",z);

	getch();
	return 0;
}

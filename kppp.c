/* 
1
23
456
78910
11 12 13 14 15 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,count =0;
	printf("ENTER ANY NUMBER");
	scanf("%d",&x);
	for(y=1;y<=x;y++)
	{
	for(z=0;z<y;z++)	
	{
		count++;
		printf("%d",count);
	}
		printf("\n");
	}


	getch();
	return 0;
}

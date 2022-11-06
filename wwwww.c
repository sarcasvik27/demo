/* 
1
23
4567
89012345
6789012345678901
 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf("ENTER ANY NUMBER");
	scanf("%d",&x);
	for(y=1;y<=pow(2,y-1);y++)
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

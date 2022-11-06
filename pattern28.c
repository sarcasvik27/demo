#include<stdio.h>
#include<conio.h>
/*
5
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA
*/  
int main()
{
	int i,j,n;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	int a=64+n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",a);
		}
		printf("\n");
		
		a--;	
	}
	return 0;
}


#include<stdio.h>
#include<conio.h>
/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/  
int main()
{
	int i,j,n,a=65;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",a);
		
		}
		printf("\n");
			a++;
	}
	return 0;
}


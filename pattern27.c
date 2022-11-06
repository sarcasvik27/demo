#include<stdio.h>
#include<conio.h>
/*
5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
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
				a++;
		
		}
		printf("\n");
		a=65;
		
	}
	return 0;
}


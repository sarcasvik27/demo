#include<stdio.h>
#include<conio.h>
/*
5
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/  
int main()
{
	int i,j,n;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{    int a=65;
		for(j=0;j<n;j++)
		{
			if(a<91)
			{
			printf("%c",i+a);
			a++;
			
			}
			
		}
		printf("\n");
			
	}
	return 0;
}


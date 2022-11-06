#include<stdio.h>
#include<conio.h>
/*
5
AFKPU
BGLQV
CHMRW
DINSX
EJOTY
*/  
int main()
{
	int i,j,n,p;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	int a=65;
	for(i=0;i<n;i++)
	{    p=0;
		for(j=0;j<n;j++)
		{
	printf("%c",i+65+p);
	   p=p+5;
		}
	
	printf("\n");		
	}
	return 0;
}


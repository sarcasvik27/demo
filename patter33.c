#include<stdio.h>
#include<conio.h>
/*
5
EJOTY
DINSX
CHMRW
BGLQV
AFKPU




*/  
int main()
{
	int i,j,n,p;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	int a=65;
	for(i=n;i>0;i--)
	{    p=0;
		for(j=n;j>0;j--)
		{
	printf("%c",i+64+p);
	   p=p+5;
		}
	
	printf("\n");		
	}
	return 0;
}


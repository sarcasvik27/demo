#include<stdio.h>
#include<conio.h>
/*
5
2
24
246
2468
246810
*/  
int main()
{
	int i,j,n,p=4;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
		for(j=1;j<=i;j++)
		{
	printf("%d",2*j);
		}
	
	printf("\n");		
	}
	return 0;
}


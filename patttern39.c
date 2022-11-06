#include<stdio.h>
#include<conio.h>
/*
5
5
54
543
5432
54321
*/  
int main()
{
	int i,j,n,p=4;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{  
		for(j=i;j<=n;j++)
		{
	printf("%d",j);
		}
	
	printf("\n");		
	}
	return 0;
}


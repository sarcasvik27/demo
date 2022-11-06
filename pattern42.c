#include<stdio.h>
#include<conio.h>
/*
4
1
23
345
4567
56789
*/  
int main()
{
	int i,j,n,p=0;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
		for(j=1;j<=i;j++)
		{
	printf("%d ",i+p);
	    p++;
		}
	
	printf("\n");
	p=0;		
	}
	return 0;
}


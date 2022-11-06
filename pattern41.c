#include<stdio.h>
#include<conio.h>
/*
4
1
23
456
78910
*/  
int main()
{
	int i,j,n,p=1;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
		for(j=1;j<=i;j++)
		{
	printf("%d ",p);
	    p++;
		}
	
	printf("\n");		
	}
	return 0;
}


#include<stdio.h>
#include<conio.h>
/*
5
1
22
333
4444
55555
*/  
int main()
{
	int i,j,n,p;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
		for(j=1;j<=i;j++)
		{
	printf("%d",i);
		}
	
	printf("\n");		
	}
	return 0;
}


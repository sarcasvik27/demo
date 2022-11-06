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
	int i,j,n,p=4;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{  
		for(j=n;j>=i;j--)
		{
	printf("%d",i);
		}
	
	printf("\n");		
	}
	return 0;
}


#include<stdio.h>
#include<conio.h>
/*
5
1
12
123
1234
12345
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
	printf("%d",j);
	   
		}
	
	printf("\n");		
	}
	return 0;
}


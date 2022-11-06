#include<stdio.h>
#include<conio.h>
/*
5
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY
ZABCD
*/  
int main()
{
	int i,j,n;
	printf("ENTER THE VALUE");
	scanf("%d",&n);
	char a='A';
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a<'Z')
			{
			printf("%c",a);
			a++;
			}
			else
			{
				a='A';
				printf("%c",a);
				a++;
			}
		}
		printf("\n");
			
	}
	return 0;
}


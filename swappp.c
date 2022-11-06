// swap 2 nos
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	printf("Enter the nos");
	scanf("%d%d",&n,&i);
	j=n;
	n=i;
	i=j;
	printf("after swap %d %d",n,i);
	return 0;
}
 

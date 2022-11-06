// largest of n  
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,n,i,p=0;
	printf("Enter the size of an array");
	scanf("%d",&n);
	ptr=(int*)malloc(i*sizeof(int));
	for(i=1;i<=n;i++)
	{
	     scanf("%d",&ptr[i]);	
	}
	for(i=1;i<=n;i++)
	{
	    if(ptr[i]>p)
	    p=ptr[i];
	}
	printf("THE LARGEST IS %d",p);
	return 0;
}
 

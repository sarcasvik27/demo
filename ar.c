// reversing an array
// 12345 54321
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,n,i,j,k,a,start=0,temp;
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++) 
    {
	scanf("%d",&ptr[i]);
    }
		for(i=n-1;i>=0;i--) 
    {
	printf("%d ",ptr[i]);
    }
	return 0;
}
  

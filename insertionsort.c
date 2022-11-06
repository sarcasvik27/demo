#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,j,temp,min,x=0;
	scanf("%d",&n);
	arr = (int*) malloc (n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{	
			if(arr[j]<arr[i])
			{
				min=j;
			}
	    }
	    temp=arr[x];
	    arr[x]=arr[min];
	    arr[min]=temp;
	    x++;
	    
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}

return 0;	
}

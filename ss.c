#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,j,temp;
	scanf("%d",&n);
	arr = (int*) malloc (n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
return 0;	
}

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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
return 0;	
}

//reverse an array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,j,n,start,end,temp;
	scanf("%d",&n);//size
	arr = (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	start=0;
	end=n-1;
	while(start<=end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
		for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	 
}

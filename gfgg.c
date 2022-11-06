
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ // Brute force method with complexity O(^3)
	int *arr,i,n,j,k,max=-1000,currentsum,bestsum;
	scanf("%d",&n);
	arr=(int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	/*for(i=0;i<n;i++)
	{	for(j=i+1;j<n;j++)
		{ int sum=0;
		for(k=i;k<=j;k++)
			{
				  sum=sum+arr[k];
			}
			if(sum>max)
			max=sum;
		}
	}
	printf("The maximum sum is %d",max);
	return 0;*/
	
	
	/* O(n^2) approach 
	for(i=0;i<n;i++)
	{   int sum=0;
		for(j=i;j<n;j++)
		{
		sum=sum+arr[j];
		if (sum>max)
		max=sum;	
		}
	}
	printf("The maximum sum is %d",max);
	return 0;*/
	
	// kandane algo with complexity O(n)
	bestsum=-1000;
	currentsum=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>currentsum+arr[i])
		currentsum=arr[i];
		else 
		currentsum=currentsum+arr[i];
		
		if(currentsum>bestsum)
		bestsum=currentsum;
	}
	printf("The maximum sum is %d",bestsum);
}

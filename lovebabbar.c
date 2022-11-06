/*
Array	Reverse the array
Array	Find the maximum and minimum element in an array
Array	Find the "Kth" max and min element of an array 
Array	Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
Array	Move all the negative elements to one side of the array 
Array	Find the Union and Intersection of the two sorted arrays.
Array	Write a program to cyclically rotate an array by one.
Array	find Largest sum contiguous Subarray [V. IMP]
Array	Minimise the maximum difference between heights [V.IMP]
Array	Minimum no. of Jumps to reach end of an array
Array	find duplicate in an array of N+1 Integers
Array	Merge 2 sorted arrays without using Extra space.
Array	Kadane's Algo [V.V.V.V.V IMP]*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()// 1 2 3
{
   int *arr,n,i,j;
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int)); 
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   // reverse an array
   /*int temp;
   i=0,j=n-1;
   while(i<j)
   {
  	temp=arr[i];
   	arr[i]=arr[j];
   	arr[j]=temp;
   	i++;
   	j--;
   }
   for(i=0;i<n;i++)
   {
   printf("%d\n",arr[i]);
   }*/
  // Maximum and Minimum of element
  /* int max=arr[0],min=arr[0];
  for(i=0;i<n;i++)
  {
  	if(arr[i]>max)
  	max=arr[i];
  	if(arr[i]<min)
  	min=arr[i];
  }
   printf("The maximum and minimum elements are %d and %d",max,min);
  return 0; 
}*/

// kth max
// sort the array and give the value
// through selection sort
/*int temp,k;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]<arr[j]){
		  temp=arr[i];
		  arr[i]=arr[j];
		  arr[j]=temp;
	                     }
	}
}
	printf("Enter K");
	scanf("%d",&k);
	printf("The %d th maximum element is %d",k,arr[k-1]);
	return 0;
}*/
// through Bubble sort	
/*int temp,k;
for(i=0;i<n;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(arr[j]<arr[j+1]){
		  temp=arr[j];
		  arr[j]=arr[j+1 ];
		  arr[j+1]=temp;
	                     }
	}
}
	printf("Enter K");
	scanf("%d",&k);
	printf("The %d th maximum element is %d",k,arr[k-1]);
	return 0;
}*/
// through insertion sort
int item,k;
for(i=1;i<n;i++)
{     item=arr[i];
	for(j=i-1;j>=0 && arr[j]>item;j--)
	{
		arr[j+1]=arr[j];
	}
	arr[j+1]=item;
}
printf("Enter K");
	scanf("%d",&k);
	printf("The %d th maximum element is %d",k,arr[n-k]);
return 0;
}
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// NULL  check
if(arr[]==NULL)
{
	printf("Empty Array");
	return 0;
}
// find K
k=n-1,i=n-1;
while(i>=0)
{
	if(arr[i]<=arr[i-1])
	{
		k--;
	}
	else
	break;	
}
if(k==-1)
{
	reverse(arr,start,end);
	
}




























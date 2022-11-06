// union and intersection of 2 sorted arrays.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int arr1[10]={1,2,3,4,5,6,7,8,9,10},arr2[10]={5,6,7,8,9,10,11,12,13,14},i,j=0,k=0,n,*arr3,arr4[10];
//union
n=(sizeof(arr1)/sizeof(int) + sizeof(arr2)/sizeof(int));
arr3=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
if(arr1[j]>arr2[k])	
{
	 arr3[i]=arr2[k];
	k++;
}
else 
{
	 arr3[i]=arr1[j];
	j++;
}
}
for(i=0;i<n;i++)
{
	printf("%d  ",arr3[i]);
}
//intersection
printf("\n");
k=0;
for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{
		if(arr1[i]==arr2[j])
		{
		arr4[k]=arr2[j];
		k++;
	   }
  }
}
for(i=0;i<k;i++)
{
	printf("%d   ",arr4[i]);
}
return 0;
}

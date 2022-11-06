#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10]={-1,2,-3,4,-5,-6,7,8,-9,-10},i,j=0,temp;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<=10;j++)
	{
		if(arr[j]<0)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	}
	}
		
	   for(i=0;i<10;i++)
	{
		printf("%d   ",arr[i]);
	}
	return 0;
}

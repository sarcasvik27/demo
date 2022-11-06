// cyclic rotate an array by 1
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10},i,temp;
	temp=arr[0];
	for(i=0;i<10;i++)
	{
	arr[i]=arr[i+1];
	}
	arr[10]=temp;
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}

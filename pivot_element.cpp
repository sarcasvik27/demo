//Pivot element
#include<iostream>
using namespace std;
int main()
{   
    int i,n,start,mid,end,x;
    cout<<"Enter the size of an array"; 
    cin>>n;
	int *arr=new int[n];
	cout<<"Enter an array";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	start=0,end=n-1;
	while(start<end)
	{
		mid=(start+end)/2;
		if(arr[mid]>arr[0])
		{
			start=mid+1;
		}
		else 
		{
			end=mid;
		}
	}
	cout<<"The pivot element is "<<arr[start];
	return 0;
}

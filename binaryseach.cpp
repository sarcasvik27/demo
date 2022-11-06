#include<iostream>
using namespace std;
int main()
{   
    int i,n,start,mid,end,x;
    cout<<"Enter the size of an array"; 
    cin>>n;
	int *arr=new int[n];
	cout<<"Enter a sorted array";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be found";
	cin>>x;
	start=0,end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[i]==x)
		{
			cout<<"Element found at "<<i+1;
			return 0;
		}
		else if(x>mid)
		{
			start=mid+1;
		}
		else 
		end=mid-1;
	}
	return 0;
}

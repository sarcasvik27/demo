#include<iostream>
using namespace std;
int binary_search(int *ptr,int n, int item)
{
	int start=0,end=n-1,mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(item==ptr[mid])
		return mid;
		else if(item<ptr[mid])
		{
			end=mid-1;
		}
		else
		start=mid+1;
	}
	return 0;
}
int main()
{
	int *ptr,n,i,item,x;
	cout<<"Enter the size of an array";
	cin>>n;
	ptr=new int [n];
	for(i=0;i<n;i++)
	{
		cin>>ptr[i];
	}
	cout<<"Enter the element to be found";
	cin>>item;
	x=binary_search(ptr,n,item);
	if(x>0)
	cout<<"	The element is found at the index "<<x+1;
	else
	cout<<"Element not found";
	
	return 0;
}


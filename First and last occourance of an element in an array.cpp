// First and last occourance of an element in an array
#include<iostream>
using namespace std;

	int first_o(int *arr,int n,int x)
	{
	int start=0,end=n-1,mid,ans;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==x)
		{
			ans=mid;
			end=mid-1;
		}
		else if(x>mid)
		{
			start=mid+1;
		}
		else 
		end=mid-1;
	}
	return ans;
   }
   	int last_o(int *arr,int n,int x)
	{
	int start=0,end=n-1,mid,ans;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==x)
		{
			ans=mid;
			start=start+1;
		}
		else if(x>mid)
		{
			start=mid+1;
		}
		else 
		end=mid-1;
	}
	return ans;
   }
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
	cout<<"Enter the key element ";
	cin>>x;
	cout<<"The first place is "<<  first_o(arr,n,x)<<endl;
	cout<<"The last place is "<<  last_o(arr,n,x);
	return 0;
}
	

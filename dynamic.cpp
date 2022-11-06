// dynamic array
#include<iostream>
using namespace std;
int main()
{
int *arr,n,i;
cin>>n;
arr= new int[n];
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
for(i=0;i<n;i++)
{
	cout<<arr[i]<<endl;
}
return 0;	
}

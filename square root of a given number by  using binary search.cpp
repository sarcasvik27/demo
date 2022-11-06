// square root of a given number by  using binary search
#include<iostream>
using namespace std;
int main(){
int n,i,start,end,mid,sq,ans;
cout<<"Enter the number to be rooted";
cin>>n;
start=0,end=n;

while(start<=end)
{
mid=(start+end)/2;
sq=mid*mid;
if(sq==n)
{
	cout<<"The root is "<<mid;
	return 0;
}
else if(sq>n)
{
	end=mid-1;
}
else{
ans=mid;
start=mid+1;
}
}
cout<<"The root is "<<ans;
return 0;
}

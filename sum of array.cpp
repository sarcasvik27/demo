// Sum of two Arrays
#include<iostream>
using namespace std;
int main()
{   
    int n,m,i,j,k;
    cin>>n>>m;
	int *a1=new int[n];
	int *a2=new int[m];
	int *a3=new int[m+n];
	for(i=0;i<n;i++)
	cin>>a1[i];
	for(i=0;i<m;i++)
	cin>>a2[i];
	// adding the two
	int sum,carry=0,ans;
	i=n-1;
	j=m-1;
	k=m+n-1;
	while(i>=0&&j>=0)
	{
		sum=a1[i]+a2[j]+carry;
		carry=sum/10;
		sum=sum%0;
		i--;
		j--;
		a3[k]=sum;
		k--;
		
	}
	while(i!=0)
	{
		sum=a1[i]+carry;
		carry=sum/10;
		sum=sum%10;
		i--;
		a3[k]=sum;
		k--;
		
	}
	while(j!=0)
	{
		sum=a2[j]+carry;
		carry=sum/10;
		sum=sum%10;
		j--;
		a3[k]=sum;
		k--;
		
	}
	while(carry!=0)
	{
	   sum=carry;
		carry=sum/10;
		sum=sum%10;
		j--;
		a3[k]=sum;
		k--;	
	}
	for(i=0;i<m+n;i++)
	{
		cout<<a3[i]<<endl;
	}
	return 0;
}

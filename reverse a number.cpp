//Reverse of a number
#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	while(n>0)
	{
	  sum=sum*10+(n%10);
	  n=n/10;	
	}
	cout<<sum;
	return 0;
	
}

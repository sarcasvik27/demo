#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			cout<<n-j+1<<" ";
		}
		cout<<endl;
	}
	for(int i=2;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

//hollow butterfly
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=2*n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(j==1||j==2*n||i==j||i+j==2*n+1)
			cout<<"*";
			else 
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		cout<<j;
		
		cout<<endl;
	}
/*
1
12
123
1234

*/
} 

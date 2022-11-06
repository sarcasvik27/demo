// Sum of numbers in a given range: 
#include<iostream>
using namespace std;
int main()
{   int n,m,sum=0;
	cout<<"Enter the first number";
	cin>>n;
	cout<<"Enter the second number";
	cin>>m;
	while(n<=m)
	{
		sum=sum+n;
		n++;
	}
	cout<<"The sum is "<<sum;
	return 0;
}
 

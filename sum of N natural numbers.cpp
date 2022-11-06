//Sum of N natural numbers
#include<iostream>
using namespace std;
int main()
{   int n,sum;
	cout<<"Enter a Number";
	cin>>n;
	while(n>0)
	{
		sum=sum+n;
		n--;
	}
	cout<<"The sum is"<<sum;
	return 0;
}
 

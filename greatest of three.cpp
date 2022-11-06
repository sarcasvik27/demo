// greatest of three
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cin>>i>>j>>k;
	int max=i;
	if(j>max)
	max=j;
	if(k>max)
	max=k;
	cout<<max;
	
}

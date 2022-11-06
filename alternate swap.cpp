#include<iostream>
using namespace std;
int main()
{
	int i,j,n[10],temp;
	for(i=0;i<10;i++)
	{
	cin>>n[i];
    }
    for(i=0;i<10;i+=2)
    {
    	if(i<9){
    	temp=n[i];
    	n[i]=n[i+1];
    	n[i+1]=temp;
    }
	}
	for(i=0;i<10;i++)
	{
	cout<<n[i];
    }
	
}

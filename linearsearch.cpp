//linear search
#include<iostream>
using namespace std;
int linearsearch(int *ptr,int n,int item,int *index)
{  int i,j=0;
	for(i=0;i<n;i++)
	{
		if (ptr[i]==item)
		{
		index[j]=i;
		j++;
		}
	}
	return j ;
}
int main()
{
	int *ptr,i,n,item,k,*index;
	cout<<"Enter the size of an array";
	cin>>n;
	ptr=new int [n];
	index=new int [n];
	for(i=0;i<n;i++)
	{
		cin>>ptr[i];
	}
	cout<<"Enter the  element to be found";
	cin>>item;
	k= linearsearch(ptr,n,item,index);
	cout<<"Element found "<<k<<"times"<<endl;
	for(i=0;i<k;i++)
	{
		cout<<"The "<<i+1<<"th number is found at position"<<index[i]+1<<endl;
	}
	return 0;
}
 

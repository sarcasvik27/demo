#include<iostream>
using namespace std;
int main()
{
	int R,C;
	cin>>R>>C;
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(i==0||i==R||j==0||j==C)
		cout<<"*";
		else
		cout<<" ";
        }
		cout<<endl;
	}
/*

*/
} 

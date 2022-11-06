// Number pyramid
#include<iostream>
using namespace std;
int main()
{
	int R,j,i;
    cin>>R;
    for(i=1;i<=R;i++)
    {
    	for(j=1;j<=R-i;j++)
    	cout<<" ";
    	for(j=1;j<=i;j++)
    	cout<<i<<" ";
    	
    	cout<<endl;
	}
	/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
	return 0;
}

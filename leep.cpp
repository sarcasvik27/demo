// Leap or not
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if(n%100!=0&&n%4==0){
	cout<<"Leap Year";
}
else if(n%100==0)
{
	if((n/100)%4==0)
	cout<<"Leap Year";
	else
	cout<<"Not a Leap Year";
}
else
cout<<"Not a Leap Year";
return 0;
}

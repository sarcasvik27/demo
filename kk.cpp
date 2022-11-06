// check if a string is a palindrome
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of string";
	cin>>n;
	char *s=new char[n];
	cin>>s;
	int start=0,end=4;
	while(start<end)
	{
		if(s[start]==s[end])
		{ 
		start++;
		end--;
		}
		else{
		cout<<"Not a palindrome";
		return 0;
		}
	}
	cout<<"It's a Palindrome";
	return 0;
}

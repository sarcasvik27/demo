
//palindrome
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp,p=0,x;
	printf("Enter Any Number");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		temp=n%10;
		p=(p*10)+temp;
		n=n/10;
	}
if(x==p)
printf("Palindrome");
else 
printf("Not A Palindrome");
	return 0;
}

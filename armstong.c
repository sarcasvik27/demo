#include<stdio.h>
#include<conio.h>
//armstrong 
int main()
{
	int n,temp=0,x,p;
	printf("Enter any Number");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		p=n%10;
		temp=temp+(p*p*p);
		n=n/10;
		
	}
	if(x==temp)
	printf("ARMSTRONG ");
	else 
	printf("Not an Armstrong");
	return 0;
	
}

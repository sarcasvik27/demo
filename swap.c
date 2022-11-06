// swap 2 nos without 3rd variable
#include<stdio.h>
#include<stdlib.h>

int main()
{   
{ // Addition and subtraction
	int n,i;
	printf("Enter the nos");
	scanf("%d%d",&n,&i);
	i=i+n;
	n=i-n;
	i=i-n;
	printf("after swap from 1 %d %d",n,i);
	 return 0;
}
{	//multiply and divide
		int n,i;
	printf("Enter the nos");
	scanf("%d%d",&n,&i);
	i=i*n;
	n=i/n;
	i=i/n;
	printf("after swap from 2 %d %d",n,i);
	return 0;
}

	// using logical operation
		long int n,i;{
	printf("Enter the nos");
	scanf("%d%d",&n,&i);
	i=i^n;
	n=i^n;
	i=i^n;
	printf("after swap from 3 %d %d",n,i);
	return 0;
}
}
 

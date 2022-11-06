//palindrome array
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],n,i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	j=n-1;
	for(i=0;i<n/2-1;i++)
	{
	if(arr[i]==arr[j])
	{
		j--;
	}
	else 
	{
     printf("Not a Palindrome");
     return;
	}
}
printf("Palindrome array");
return 0;
	
}

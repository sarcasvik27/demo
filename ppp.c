//reverse an array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,j,n,start,end,temp;
	scanf("%d",&n);//size
	arr = (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	 //palindrome array
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],arr2[100],n,i,j,count=0;
	scanf("%d",&n);
	j=n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<=n;i++){
	(arr2[i]==arr[j]);
		j--;
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr2[i])
		{
			
		}
		else {
		
		printf("Not Palindrome");
		return;
	}
	
			}
			printf("Palindrome");
return 0;
}
}

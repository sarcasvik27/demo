#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int *arr,n,i,j;
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int)); 
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   	if(arr[j]==arr[i]);{
   	printf("%d",arr[j]);
   	return 0;
   }
    }
   }
  return 0; 
}

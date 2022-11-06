#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int *arr,n,i,temp;
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int)); 
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   { 
   if(arr[i]<0)
   
   temp=arr[i];
   if(arr[temp]<0){
   	printf("The repeated number is %d",arr[temp]);
   	return 0;}
   arr[temp]=-1*arr[temp];
     
   }
   
   
  return 0; 
}

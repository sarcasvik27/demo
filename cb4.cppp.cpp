//sorting 0,1,2 without sorting algorithm
#include<iostream>
using namespace std;
int main()
{
	int *arr,*arr1,*arr2,*arr3,*arr4,i,n,j=0,k=0,l=0;
	cin>>n;
	arr= new int [n];
	arr1= new int [n];
	arr2= new int [n];
	arr3= new int [n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	} 
	for(i=0;i<n;i++)
	
	{
		if(arr[i]==0){
			arr1[j]=0;
		j++;
	          }
	          else if(arr[i]==1){
	          	arr2[k]=1;
	          k++;
	      }
	      else if (arr[i]==2)
	      arr3[l]=2;
		  	l++;
			  
    }
    arr4=new int [j+k+l];
    for(i=0;i<j;i++)
    {
    	arr4[i]=0;
	}
	for(i=j;i<k;i++)
    {
    	arr4[i]=1;
	}
	for(i=k;i<l;i++)
    {
    	arr4[i]=2;
	}
	
   for(i=0;i<j+k+l;i++)
   {
   	cout<<arr4[i]<<"   ";
   }
	 return 0;
  }
 
	 

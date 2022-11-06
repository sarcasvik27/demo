//merge without using extra space
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bubblesort(int *ptr,int size)
{  int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",ptr[i]);
	}
}
int main()
{
	int *arr1,*arr2,n,i,m,j,temp;
	printf("Enter the size of first array");
	scanf("%d",&n);
	printf("Enter the size of 2nd array");
	scanf("%d",&m);
	arr1=(int*)malloc(n*sizeof(int));
	arr2=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&arr2[i]);
	}
	i=0,j=n-1;
	while(i<m && j>=0)
	{
		if(arr2[i]<arr1[j])
		{
			temp = arr2[i];
			arr2[i]=arr1[j];
			arr1[j]=temp;
		}
		i++;
		j--;
	
	}

	  bubblesort(arr1,n);
	  bubblesort(arr2,m);
	
return 0;	
}

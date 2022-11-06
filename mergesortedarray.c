//merge 2 sorted arrays
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void mergesortedarray(int *a,int *b, int*c, int n, int m){
    int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
	      c[k]=a[i];
	      i++;
	    }
	    else
	    {
	    	c[k]=b[j];
	    	j++;
		}
		k++;	
	}
	while(i<n)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<m)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	return ;
}
int main()
{
int *ptr1,*ptr2,*ptr3,n,m,i;
 printf("Enter the size of 1st sorted array");
scanf("%d",&n);
ptr1=(int*) malloc(n*sizeof(int));
 printf("Enter the size of 2nd sorted array");
scanf("%d",&m);
ptr2=(int*) malloc(m*sizeof(int));
for(i=0;i<n;i++)
{
	scanf("%d",&ptr1[i]);
}
for(i=0;i<m;i++)
{
	scanf("%d",&ptr2[i]);
}
ptr3=(int*) malloc((n+m)*sizeof(int));
mergesortedarray(ptr1,ptr2,ptr3,n,m);// function called
for(i=0;i<m+n;i++)
{
	printf("%d\t",ptr3[i]);
}
	return 0;
}

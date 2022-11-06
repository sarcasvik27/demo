//merge 2 sorted arrays
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void min_max_of_array(int *a,int n){
	int i,min,max;
	max=a[0];
	min=a[0];
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]>max)
	 	max=a[i];
	 	else if(a[i]<min)
	 	min=a[i];
	 }
	 printf("The minimum and maximum of this array are %d    %d",min,max);
	return ;
}
int main()
{
int *ptr1,n,i;
 printf("Enter the size of array");
scanf("%d",&n);
ptr1=(int*) malloc(n*sizeof(int));
for(i=0;i<n;i++){
scanf("%d",&ptr1[i]);
}
min_max_of_array(ptr1,n);// function called
	return 0;
}

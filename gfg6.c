// largest sum of contigious sub-array
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int num,i,j,*arr,sum=0,count=-1000;
	printf("Enter Any Number");
	scanf("%d",&num);
	arr=(int*) malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
    }
   for(i=0;i<num;i++)
   {
   	for(j=i;j<num;j++)
   	{
   		sum=arr[j]+sum;//-5,4,6,-3,4,-1
   		if(sum>count)
   		{count=sum;
   		printf("%d\n",count);
	   }
	   }
	   
   }
   printf("%d",count);
	return 0;
}

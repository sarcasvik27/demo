#include<stdio.h>
#include<stdlib.h>
//malloc,calloc,realloc,free
int main()
{
	int num,i,j,temp,*arr;
	scanf("%d",&num);
	arr=(int*) malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<num;i++)
	{
		printf("using malloc %d\n",arr[i]);
	}
	    scanf("%d",&num);
		arr=(int*) calloc(num,sizeof(int));
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<num;i++)
	{
		printf("using calloc %d\n",arr[i]);
	}
	return 0;
}

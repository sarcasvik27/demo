//perfect number
//6=1+3+2

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,i,count=0;
	printf("ENTER A NUMBER");
	scanf("%d",&x);
	for(i=1;i<x-1;i++){
	if(x%i==0)
	{
		count=count+i;
	}
             }
    if(count==x)
	printf("PERFECT NUMBER");
	else
	printf("NOT A PERFECT");     
	return 0;
}
  

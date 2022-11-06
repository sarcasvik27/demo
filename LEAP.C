//leap year

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	printf("ENTER A YEAR");
	scanf("%d",&x);
	if(x%4==0)
	{
		if(x%100==0)
		{
			if(x%400==0)
			{
	    	printf("LEAP");	
			}
			else
        	printf("Not a LEAP");
		}
		else
		printf("LEAP");
	}
		else
		printf(" Not a LEAP"); 
	
	return 0;
}
  

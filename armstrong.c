//armstrong number
//153=1^3 + 3^3 + 5^3

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,i,p=0,temp;
	printf("ENTER A NUMBER");
	scanf("%d",&x);
	temp=x;
	while(x!=0)
	{
	i=x%10;
	p=(i*i*i)+p;
	x=x/10;

    }
    if(p==temp)
	printf("ARMSTRONG NUMBER");
	else
	printf("NOT AN ARMSTRONG");     
	return 0;
}
  

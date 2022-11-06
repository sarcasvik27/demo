// prime
// created own logic 
#include<stdio.h>
#include<conio.h>

int main()
{
	int x,i,count=0;
	scanf("%d",&x);
	if(x==1)
	{ printf("Neither prime nor composite");
	return 0;
	}
	for(i=2;i<=x-1;i++){
    if((x%1==0 && x%x==0) && x%i!=0)
    count++;
}
   printf("%d \n",count);
   if(count==x-2)
    printf("%d is prime",i);
    else 
    printf("not a prime");
	return 0;
}
 

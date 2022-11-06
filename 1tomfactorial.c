//factorial of each number from 1 to n
//1 to n factorial
#include<stdio.h>
#include<stdlib.h>

int main()
{
   double x,i,j,k;
	printf("ENTER A NUMBER");
	scanf("%lf",&x);
	for(i=1;i<=x;i++){
		k=1;
        for(j=i;j>=1;j--)
        {
        	k=k*j;
		}
          printf("The factorial of %.0lf is %.0lf\n",i,k);
		    }
           
	return 0;
}
  

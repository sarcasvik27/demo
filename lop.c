/*    

      *******
       *****
        ***
         * 
*/ 
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,j,k,l,m;
	printf("ENTER THE NUMBER \n");
    scanf("%d",&i);
   for(j=0;j<i;j++)
   {
   	for(k=0;k<j;k++)
   	
	   	   printf(" ");
	
	for(l=1;l<=i-j;l++)
	{
	printf("*");
    }
 for(m=1;m<i-j;m++)
 {
 	printf("*");
 }
     
    printf("\n");
   }
	getch();
	return 0;
}

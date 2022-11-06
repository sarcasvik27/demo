/*    *
     ***
    *****
   *******
*/ 
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,j,k,l;
	printf("ENTER THE NUMBER \n");
    scanf("%d",&i);
   for(j=1;j<=i;j++)
   {
   	for(k=1;k<=i-j;k++)
   	
	   	   printf(" ");
	
	for(l=1;l<=(2*j)-1;l++)
	{
	printf("*");
    }

    printf("\n");
   }
	getch();
	return 0;
}

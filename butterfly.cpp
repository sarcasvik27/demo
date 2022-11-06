/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
#include<iostream>
using namespace std;
int main()
{    
    int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
     {
     	for(j=1;j<=i;j++)
     	{
     		printf("*");
		 }
		 for(j=1;j<=2*n-2*i;j++)
		 {
		 	printf(" ");
		 }
		 for(j=1;j<=i;j++)
     	{
     		printf("*");
		 }
		 printf("\n");
	 }
	 	for(i=n;i>=1;i--)
     {
     	for(j=1;j<=i;j++)
     	{
     		printf("*");
		 }
		 for(j=1;j<=2*n-2*i;j++)
		 {
		 	printf(" ");
		 }
		 for(j=1;j<=i;j++)
     	{
     		printf("*");
		 }
		 printf("\n");
	 }
return 0;
}

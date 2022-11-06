// factorial using function
#include<stdio.h>
#include<conio.h>
int j;
int fact(int j)
{   if(j<=1)
    return (01);
    else {
	j=j*fact(j-1);
	return j;
         }
}
int main()
{
	int x,i;
	scanf("%d",&x);
    i=fact(x);
    printf("%d",i);
	return 0;
}
 

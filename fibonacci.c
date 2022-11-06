//0 1 1 2 3 5 8 13 21 34
#include<stdio.h>
#include<conio.h>

int main()
{
	int x,i,n1=0,n2=1,n3;
	scanf("%d",&x);
	printf("%d\n%d\n",n1,n2);
   for(i=3;i<=x;i++)
   {
   	n3=n1+n2;
   	printf("%d\n",n3);
	n1=n2;
	n2=n3;
  }
	return 0;
}
  

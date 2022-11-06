#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int rec(int a, int b, int c,int n)
{   
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else if(n==3)
    return c;
    else
    return rec(a,b,c,n-1)+rec(a,b,c,n-2)+rec(a,b,c,n-3);   
}


int main()
{
    int a,b,c,n,d;
    scanf("%d",&n);
    scanf("%d%d%d",&a,&b,&c);
   d=rec(a,b,c,n);
   printf("%d",d);
    
    return 0;
}

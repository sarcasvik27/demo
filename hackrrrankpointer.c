
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void update(int *a,int *b)
{
    int i,j;
    i=*a+*b;
    j=abs(*a-*b);
    *a=i;
    *b=j;
    
}
int main()
{
    int a,b;
    int *ptra=&a;
    int *ptrb=&b;
    scanf("%d%d",&a,&b);
    update(ptra,ptrb);
    printf("%dn%d",a,b);
    
    return 0;
    
}

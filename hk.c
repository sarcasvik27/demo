#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],i,j,k,z,x,y;
    scanf("%d",&i);
    y=i;
    for(z=0;z<i;z++)
    {
        scanf("%d",&a[z]);
    }
   if(y%2!=0)
   {
	for(j=0;j<=i/2;j++)
    {   
       k=a[j];
       a[j]=a[i-1];
       a[i-1]=k;
       i--;
    }
}
    else if(y%2==0)
   {
	for(j=0;j<=i/2+1;j++)
    {   
       k=a[j];
       a[j]=a[i-1];
       a[i-1]=k;
       i--;
    }
   }
    for(x=0;x<y;x++)
    {
        printf("%d ",a[x]);
    }
       
    return 0;
}


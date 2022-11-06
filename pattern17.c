#include <stdio.h>
#include<conio.h>
/*
13579
357911
5791113
79111315
911131517
*/

int main() {
    int i,j,n,h,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    count=0;
    	for(j=1;j<=n;j++){
    		h=(2*i)-1;
    	printf("%d",h+count);
    	count=count+2;
	}
    printf("\n");
}
    return 0;
}

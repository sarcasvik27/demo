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
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    
    	for(j=1;j<=n;j++){
    		
    	printf("%d",(i+j)%2);
    	
	}
    printf("\n");
}
    return 0;
}

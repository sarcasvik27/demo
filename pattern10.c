#include <stdio.h>
#include<conio.h>
/*
112131
122223 
132333
142434
152535
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=3;j++){
    	printf("%d%d ",j,i);
    	
	}
    printf("\n");
}
    return 0;
}

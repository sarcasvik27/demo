#include <stdio.h>
#include<conio.h>
/*
01010
00000
01010
00000
01010
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    
    	for(j=1;j<=n;j++){
    	if(i%2!=0)	
    	printf("1");
    	else
    	printf("0");
                
            
    }
    	 
    printf("\n");
}
    return 0;
}

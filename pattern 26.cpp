#include <stdio.h>
#include<conio.h>
/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/

int main() {
    char n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    
    	for(j=1;j<=n;j++){
    	if(i%2!=0)	
    	printf("0");
    	else
    	printf("1");
                
            
    }
    	 
    printf("\n");
}
    return 0;
}

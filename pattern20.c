#include <stdio.h>
#include<conio.h>
/*
10101
00000
10101
00000
10101
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    
    	for(j=1;j<=n;j++){
    	if(i%2!=0){
		if((i+j)%2==0)	
    	printf("1");
    	else
    	printf("0");
                }
        else
		{printf("0");
				}        
    }
    	
	
    printf("\n");
}
    return 0;
}

#include <stdio.h>
#include<conio.h>
/*
1 3 5 7 9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49  
*/

int main() {
    int i,j,n,count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=n;j>=1;j--){
    	printf("%d ",2*count);
    	count++;
	}
    printf("\n");
}
    return 0;
}

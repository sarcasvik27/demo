#include <stdio.h>
#include<conio.h>
/*
12345
23456
34567
45678
56789
*/

int main() {
    int i,j,n,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    count=0;
    	for(j=1;j<=n;j++){
    	printf("%d",i+count);
    	count++;
	}
    printf("\n");
}
    return 0;
}

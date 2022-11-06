#include <stdio.h>
#include<conio.h>
/*
54321
54321
54321
54321
54321
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=n;j>=1;j--){
    	printf("%d",j);
	}
    printf("\n");
}
    return 0;
}

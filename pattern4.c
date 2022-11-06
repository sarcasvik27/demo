#include <stdio.h>
#include<conio.h>
/*
55555
44444
33333
22222
11111
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    	for(j=1;j<=n;j++){
    	printf("%d",i);
	}
    printf("\n");
}
    return 0;
}

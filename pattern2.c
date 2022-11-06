#include <stdio.h>
#include<conio.h>
/*
11111
22222
33333
44444
55555
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++){
    	printf("%d",i+1);
	}
    printf("\n");
}
    return 0;
}

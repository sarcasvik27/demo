#include <stdio.h>
#include<conio.h>
/*
12345
12345
12345
12345
12345
*/

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++){
    	printf("%d",j+1);
	}
    printf("\n");
}
    return 0;
}

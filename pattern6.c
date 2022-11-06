#include <stdio.h>
#include<conio.h>
/*
12345
678910
1112131415
1617181920
2122232425
*/

int main() {
    int i,j,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=n;j>=1;j--){
    		count++;
    	printf("%d ",count);
	}
    printf("\n");
}
    return 0;
}

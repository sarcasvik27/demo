#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,count=0,i;
    scanf("%d", &n);
    while(n>0){
    i=n%10;
    count=count+i;
    n=n/10;
    }
     printf("%d",count);
    return 0;
}

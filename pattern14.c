/*
5 10 15 20 25
4 9 14 19 24
3 8 13 18 13
2 7 12 17 22
1 6 11 16 21
*/
#include<stdio.h>
int main() { 
    int i,j,n,h;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
    	h=0;
    	for(j=n;j>=1;j--)
	 {
    printf("%d ",(i+h));
    h=h+5;
      }
      printf
	  ("\n");
	}
	

    return 0;
}

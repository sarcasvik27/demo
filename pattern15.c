/*
5 6 15 16 25
4 7 14 17 24
3 8 13 18 23
2 9 12 19 22
1 10 11 20 21
*/
#include<stdio.h>
int main() { 
    int i,j,n,h,k,a=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
    	h=0;
    	for(j=1;j<=n;j++)
	 {
	 if(j%2!=0)
	 {
	 	k=i+h;
    printf("%d ",k);
    h=h+10;
     }
    else
    {
     printf("%d ",k+(2*a)-1);
	}
      }
     	 printf("\n");
     	 a++;
	}

	

    return 0;
}

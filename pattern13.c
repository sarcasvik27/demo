/*
1 10 11 20 21
2 9 12 19 22
3 8 13 18 23
4 7 14 17 24
5 6 15 16 25
*/
#include<stdio.h>
int main() { 
    int i,j,n,p=4,h=5,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    if(j%2!=0)
	  {    
    printf("%d ",(5*j)-p);
   
      }
      else
      {  
      	printf("%d ",(j*5)-count);
	  }
    	
	}
	 p--;
	 count++;
	printf("\n");
   
}
    return 0;
}

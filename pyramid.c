#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter the Number");
	scanf("%d",&n);
	l=1;
	for(i=n;i>=1;i--)
	{    for(j=i-1;j>=1;j--){
		printf(" ");
	            }
	            
	for(k=1;k<=2*l-1;k++){
	    printf("%d",l);
	}
	    printf("\n");
	    l++;
    }
    
	return 0;
}

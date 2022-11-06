#include <stdio.h>

int main() {
	int T,a;
	scanf("%d",&T);
	while(T!=0)
	{ 
	    scanf("%d",&a);
	    if(a==20)
	    printf("cold\n");
	    if(a>20)
	    printf("HOT\n");
	    else if(a<20)
	    printf("COLD\n");
	   T--;
	   
	}
	return 0;
}



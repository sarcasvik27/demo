#include <stdio.h>

int main() {
    int a,b,c;
	scanf("%d",&a);
	while(a!=0){
	scanf("%d %d",&b,&c);
	if(b>c)
	printf("%d\n",c);
	else 
	printf("%d\n",b);
	a--;
	}
	return 0;
}



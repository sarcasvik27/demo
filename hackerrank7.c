// hello,namaste sir
// hello
// namaste
// sir
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	char *ptr;
	ptr=(char*)malloc(1024*sizeof(char)); 
	gets(ptr);
	while(ptr[i]!='\0')
	{
		if(ptr[i]==' ')
		printf("\n");
		else
		printf("%c",ptr[i]);
		i++;
	}
	return 0;
}
  

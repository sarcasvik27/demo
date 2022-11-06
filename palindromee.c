//5143415
//palindrome
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,i,temp,p,s=0;
	printf("ENTER A NUMBER");
	scanf("%d",&x);
	temp=x;
	while(x>0)
	{
		p=x%10;
		s=p+(s*10);
		x=x/10;
	}
	if(s==temp)
	printf("Palindrome");
	else
	printf("Not a Palindrome");
	

	return 0;
}
  

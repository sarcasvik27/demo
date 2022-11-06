// 3663 palindrome
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,j,s=0,temp;
	printf("ENTER THE NUMBER \n");
    scanf("%d",&i);
    temp=i;
    while(i>0)
    {
    	j=i%10;
    	s=j+(s*10);
    	i=i/10;
	}
	if(temp==s)
	{
	printf("its a palindrome number");
    }
	else{
	printf("not a palindrome ");
       }
	getch();
	return 0;
}

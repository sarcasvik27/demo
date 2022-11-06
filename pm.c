
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,j,count=0,temp;
	printf("ENTER THE NUMBER \n");
    scanf("%d",&i);
    temp=i;
    while(temp>0)
    {
    	j=temp%10;
    	count=(j*j*j)+count;
    	temp=temp/10;
	}
	if(i==count)
	{
	printf("its an amrstrong number");
    }
	else{
	printf("not an armstrong ");
       }
	getch();
	return 0;
}

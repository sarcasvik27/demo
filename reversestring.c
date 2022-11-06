 /* 
resversing a stirng*/
#include<stdio.h>
#include<conio.h>
#include<conio.h>
int main()
{
	char temp,x[]="SATVIKJOSHI";
	int i,count=0;
	while(x[count]!=0)
{
	count++;
}
printf("%s \n",x);
printf("THE LENGTH OF THE STRING IS %d \n",count);
for(i=0;i<=(count-1)/2;i++)
{
	temp=x[i];
	x[i]=x[count-i-1];
	x[count-i-1]=temp;
}
printf("%s",x);
	getch();
	return 0;
}

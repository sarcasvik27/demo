#include<stdio.h>
#include<conio.h>
int main()
{
int i;
for(i=1;i<=5;i++)
{
	switch(i)
	{ 
	case(1):
	printf("* \n");
	break;	
	case(2):
	printf("* * \n");
	break;
	case(3):
	printf("* * * \n");
	break;	
	case(4):
	printf("* * * * \n");
	break;	
	case(5):
	printf("* * * * * \n");
	break;	
	}
}
	getch();
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int array[100];
	int a,b;
	printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT");
	scanf("%d",&b);
	for(a=0;a<b;a++){
		printf("ENTER THE %d NUMBER",a+1);
		scanf("%d",&array[a]);
		printf("THE NUMBERS ARE %d",array[a]);
			}
				return 0;
}

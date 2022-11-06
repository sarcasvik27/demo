#include<stdio.h>
void main()
{
 int n; // limit
 int cn; // current no
 int i,j; // loop
 long int fact; // factorial
 
 printf("Enter a number : ");
 scanf("%d",&n);
 
 printf("\nFactorial of numbers between 1 to %d : \n",n);  
 printf("Number : Factorial \n");  
 
 for(i=1;i<=n;i++)
 { 
  cn=i;
  fact=1;
  for(j=1;j<=cn;j++)
  {
   fact=fact*j;    
  }
  printf("%5d  : %ld\n",cn,fact);// %5d is used for 
         fomatting o/p 
  
 } //eo outer loop
}

/*
OUTPUT :

Enter a number : 10

Factorial of numbers between 1 to 10 :
Number : Factorial
    1  : 1
    2  : 2
    3  : 6
    4  : 24
    5  : 120
    6  : 720
    7  : 5040
    8  : 40320
    9  : 362880
   

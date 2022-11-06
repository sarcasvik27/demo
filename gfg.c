#include <stdio.h>
int main()
{

	// Array declaration by initializing it
	// with more elements than specified size.
	int i, arr[2] = { 10, 20, 30, 40, 50 };
   for(i=0;i<5;i++)
   {
   	printf("%d\n",arr[i]);
   }
	return 0;
}


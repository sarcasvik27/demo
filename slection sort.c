   #include<stdio.h> #include<conio.h>
   int main()
   {
   	int *ptr,i,j,n,temp,k;
   	printf("Enter Any Number");
   	scanf("%d",&n);
   	ptr = (int*)malloc(n*sizeof(int));
   	for(i=0;i<n;i++)
   	   {
   		scanf("%d",&ptr[i]);
	   }
   	for(i=0;i<n;i++)
   	{
   		for(j=i+1;j<n;j++)
   		{
   			if(ptr[j]<ptr[i])
   			{
			temp=ptr[j];
   			ptr[j]=ptr[i];
			ptr[i]=temp;
		   }
 		   }
	   }
   printf("ENTER ANY NUMBER");
   scanf("%d",&k);
   printf("the kth max number is %d",ptr[k-1]);
	   return 0;
   }

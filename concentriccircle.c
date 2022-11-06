#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--){
		printf("%d",j);
	}
	for(l=1;l<=(i-1)*2-1;l++){
	printf("%d",i);
}
	for(k=i;k<=n;k++){
	if(k==1)
	continue;
	printf("%d",k);
}
printf("\n");
}
for(i=2;i<=n;i++)
{
	{
		for(j=n;j>=i;j--){
		printf("%d",j);
	}
	for(l=1;l<=(i-1)*2-1;l++){
	printf("%d",i);
}
	for(k=i;k<=n;k++){
	if(k==1)
	continue;
	printf("%d",k);	
}
}
printf("\n");
}
	return 0;
}

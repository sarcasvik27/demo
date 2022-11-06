/*
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
*/
int main() {
    int i,j,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   count=i;
    	for(j=1;j<=n;j++){
    	printf("%d ",count);
    	count=count+5;
	}
	printf("\n");
   
}
    return 0;
}

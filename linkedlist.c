#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node{
	int info;
	struct node *next;
}node;
node* add_first(node* start,int item)
{
	node *New=(node*) malloc(sizeof(node));
	if(New==NULL){
		printf("OVERFLOW");
		return start;
	}
	New->info=item;
	New->next=start;
	start=New;
	return start;
}
node * add_last(node* start,int item)
{
 node *New=(node*) malloc(sizeof(node));
 node *ptr;
 if(New==NULL)
 {
 	printf("Overflow");
 	return start;
 }
 New->info=item;
 New->next=NULL;
 if(start==NULL)
 {
 	start=New;
 }
 else{
 	ptr=start;
 while(ptr->next!=NULL)
 {
 	ptr=ptr->next;
 }
 ptr->next=New;
}
return start;
}
node * add_after(node* start,int item,int loc){
	if(start==NULL)
	{
	 printf("EMPTY LIST");
     return start;
	}
	node *ptr=start;
	while(ptr!=NULL && ptr->info!=loc)
	{
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		printf("location not found");
		return start;
	}
	node *New=(node*)malloc(sizeof(node));
	if(New==NULL){
		printf("Overflow");
		return start;
	}
	New->info=item;
	New->next=ptr->next;
	ptr->next=New;
	return start;
}
node * add_before(node* start,int item,int loc)
{
if(start==NULL)
	{
	 printf("EMPTY LIST");
     return start;
	}
		if(start->info==loc){
			start=add_first(start,item);
			return start;
		}
	node *ptr=start;
	node *preptr;
	
	while(ptr!=NULL && ptr->info!=loc)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		printf("location not found");
		return start;
	}
	node *New=(node*)malloc(sizeof(node));
	if(New==NULL){
		printf("Overflow");
		return start;}
	
		New->info= item;
		preptr->next=New;
		New->next=ptr;
		return start;
			
}
node * del_first(node* start)
{
	if(start==NULL)
	{
		printf("UNDERFLOW");
		return start;
	}
	node *ptr;
	ptr=start;
	start=start->next;
	printf("%d is deleted",ptr->info);
	free(ptr);
	return start;
}
node* del_last(node *start)
{
		if(start==NULL)
	{
		printf("UNDERFLOW");
		return start;
	}
	if(start->next==NULL){
		start=NULL;
	}
	else{
	
	node *ptr;
	node *preptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	printf("%d is deleted",ptr->info);
	free(ptr);
	}
	return start;

}
node * del(node* start,int item){
	if(start==NULL)
	{
		printf("UNDERFLOW");
		return start;
	}
	if(start->info==item)
	{
		start=del_first(start);
		return start;
	}
	node *ptr,*preptr;
	ptr=start;
	while(ptr!=NULL && ptr->info!=item)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		printf("Item not found");
		return start;
	}
	preptr->next=ptr->next;
	ptr->next=NULL;
	printf("%d is deleted ",ptr->info);
	free(ptr);
	return start;
}

void output(node *start)
{
    node *ptr;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
}
int main()
{
	node* start=NULL;
	int n,item,loc;
    do{
        //system("cls");
        printf("1. Add first\n");
        printf("2. Add last\n");
        printf("3. Add after\n");
        printf("4. Add before\n");
        printf("5. Del first\n");
        printf("6. Del last\n");
        printf("7. Del node\n");
        printf("8. Display list\n");
        printf("0. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter item:");
                scanf("%d",&item);
                start=add_first(start,item);
                getch();
                break;
            case 2:
                printf("Enter item:");
                scanf("%d",&item);
                start=add_last(start,item);
                getch();
                break;
            case 3:
                printf("Enter item and loc:");
                scanf("%d%d",&item,&loc);
                start=add_after(start,item,loc);
                getch();
                break;
            case 4:
                printf("Enter item and loc:");
                scanf("%d%d",&item,&loc);
                start=add_before(start,item,loc);
                getch();
                break;
           case 5:
                start=del_first(start);
                getch();
                break;
            case 6:
                start=del_last(start);
                getch();
                break;
            case 7:
                printf("Enter item to delete:");
                scanf("%d",&item);
                start =del(start,item);
                getch();
                break; 
            case 8:
                output(start);
                getch();
                break;
            case 0:
                break;
            default:
                printf("Invalid input");
                getch();
        }
    }while(n!=0);
}


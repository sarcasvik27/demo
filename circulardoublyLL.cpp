// circular doubly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node{
	int info;
	node *prev;
	node *next; 
};
void add_first(node **start, node **end, int item){
	node *New=(node*)malloc(sizeof(node));
	if(New==NULL)
	{
		printf("OVERFLOW");
		return;
	}
	New->info=item;
	if(*start==NULL)
	{
	New->next=New;
	New->prev=New;	
	*start=New;
	*end=New;
	return;
	}

	New->next=*start;
	(*start)->prev=New;
	(*end->)next=New;
	New->prev=*end;
	*start=New;
	return;
}
void add_last(node** start,node** end,int item){
	node *New=(node*)malloc(sizeof(node));
	if(New==NULL)
	{
		printf("OVERFLOW");
		return;
	}
	New->info=item;
	if(*end==NULL)
	{
	New->next=New;
	New->prev=New;
	*start=New;
	*end=New;	
	return;
    }
    New->prev=*end;
    (*end)->next=New;
    (*start)->prev=New;
    New->next=*start;
    *end=New;
    return;
	
}
void add_before(node** start,node**end,int item,int loc){
	node *ptr=start;
	if(*start==NULL)
	{
		printf("EMPTY LIST");
		return;
	}
	if((*start)->info==loc)
	{
		add_first(start,end,item)
	}
	while(ptr!=*end && ptr->info!=loc){
		ptr=ptr->next;
	}
	if(ptr==*end)
	{
		printf("Location not found");
		return;
	}
	node* New=(node*)malloc(sizeof(node));
    New->info=item;
    ptr->prev->next=New;
    New->prev=ptr->prev;
    New->next=ptr;
    ptr->prev=New;
    return;
    
}
void add_after(node**start,node**end,int item,int loc){
	node *ptr=start;
	if(*start==NULL)
	{
		printf("EMPTY LIST");
		return;
	}
	if(end->info==loc)
	{
		add_last(start,end,info);
		return;
	}
	while(ptr!=*end && ptr->info!=loc){
		ptr-ptr->next;
	}
	if(ptr==*end)
	{
		printf("Location Not Found");
		return;
	}
	New->prev=ptr;
	New->next=ptr->next;
	New->next-.prev=New;
	ptr->next=New;
	return;
}
void output(node *start, node *end)
{
    node *ptr;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }
    ptr=start;
    while(ptr!=end)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("%d ",ptr->info);    
}

int main()
{
	{
    node *start=NULL;
    node *end=NULL;
    int n,item,loc;
    do{
        system("cls");                
        printf("1. Add first\n");
        printf("2. Add last\n");
        printf("3. Add before\n");
        printf("4. Add after\n");
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
                add_first(&start,&end,item);
                getch();
                break;
            case 2:
                printf("Enter item:");
                scanf("%d",&item);
                add_last(&start,&end,item);
                getch();
                break;
            case 3:
                printf("Enter item and loc:");
                scanf("%d%d",&item,&loc);
                add_before(&start,&end,item,loc);
                getch();
                break;
            case 4:
                printf("Enter item and loc:");
                scanf("%d%d",&item,&loc);
                add_after(&start,&end,item,loc);
                getch();
                break;
            /*case 5:
                del_first(&start,&end);
                getch();
                break;
            case 6:
                del_last(&start,&end);
                getch();
                break;
            case 7:
                printf("Enter item to delete:");
                scanf("%d",&item);
                del_node(&start,&end,item);
                getch();
                break;*/
            case 8:
                output(start,end);
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
}



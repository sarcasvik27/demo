#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next;
}node;
void add_first(node **start,node **end,int item)
{
    node *New=(node*)malloc(sizeof(node));
    if(New==NULL)
    {
        printf("Overflow");
        return;
    }
    New->info=item;
    if(*start==NULL)
    {
        *start=*end=New;
        New->next=New;
    }
    else
    {
        New->next=*start;
        *start=New;
        (*end)->next=*start;
    }
}
void add_last(node **start,node **end,int item)
{
    node *New=(node*)malloc(sizeof(node));
    if(New==NULL)
    {
        printf("Overflow");
        return;
    }
    New->info=item;
    if(*start==NULL)
    {
        *start=*end=New;
        New->next=New;
    }
    else
    {
        (*end)->next=New;
        New->next=*start;
        *end=New;
    }
}
void add_after(node **start,node **end,int item, int loc)
{
    node *New,*ptr;
    if(*start==NULL)
    {
        printf("List is empty");
        return;
    }
    if((*end)->info==loc)
    {
        add_last(start,end,item);
        return;
    }
    ptr=*start;
    while(ptr!=*end && ptr->info!=loc)
    {
        ptr=ptr->next;
    }
    if(ptr==*end)
    {
        printf("Loc not found");
        return;
    }
    New=(node*)malloc(sizeof(node));
    if(New==NULL)
    {
        printf("Overflow");
        return;
    }
    New->info=item;
    New->next=ptr->next;
    ptr->next=New;
}

void add_before(node **start,node **end,int item, int loc)
{
    node *New,*ptr;
    if(*start==NULL)
    {
        printf("List is empty");
        return;
    }
    if((*start)->info==loc)
    {
        add_first(start,end,item);
        return;
    }
    ptr=*start;
    while(ptr!=*end && ptr->next->info!=loc)
    {
        ptr=ptr->next;
    }
    if(ptr==*end)
    {
        printf("Loc not found");
        return;
    }
    New=(node*)malloc(sizeof(node));
    if(New==NULL)
    {
        printf("Overflow");
        return;
    }
    New->info=item;
    New->next=ptr->next;
    ptr->next=New;
}

void del_first(node **start,node **end)
{
    node *ptr;
    if(*start==NULL)
    {
        printf("Underflow");
        return;
    }
    ptr=*start;
    if(*start==*end)
    {
        *start=*end=NULL;
    }
    else
    {
        *start=(*start)->next;
        (*end)->next=*start;    
    }
    printf("%d is deleted\n",ptr->info);
    free(ptr);
    return;
}

void del_last(node **start,node **end)
{
    node *ptr,*ptr2;
    if(*start==NULL)
    {
        printf("Underflow");
        return;
    }
    ptr=*end;
    if(*start==*end)
    {
        *start=*end=NULL;
    }
    else
    {
        ptr2=*start;
        while(ptr2->next!=*end)
        {
            ptr2=ptr2->next;
        }
        *end=ptr2;
        (*end)->next=*start;
    }
    printf("%d is deleted\n",ptr->info);
    free(ptr);
    return;
}

void del_node(node **start,node **end,int item)
{
    node *ptr, *preptr;
    if(*start==NULL)
    {
        printf("Underflow");
        return;
    }
    if((*start)->info==item)
    {
        del_first(start,end);
        return;
    }
    if((*end)->info==item)
    {
        del_last(start,end);
        return;
    }
    ptr=(*start)->next;
    preptr=*start;
    while(ptr!=*end && ptr->info!=item)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    if(ptr==*end)
    {
        printf("Item not found");
        return;
    }
    preptr->next=ptr->next;
    printf("%d is deleted\n",ptr->info);
    free(ptr);
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
    node *start=NULL;
    node *end=NULL;
    int n,item,loc;
    do{
        system("cls");                //clrscr()  in turbo
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
            case 5:
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
                break;
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

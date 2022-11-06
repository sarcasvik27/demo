 //Circular Linked List
 #include<stdio.h>
 #include<conio.h>
 typedef struct node{
 	int info;
 	node *next;
 }node;
 void add_first(node*start,node*end,int item)
 {
 	node *New=(node*)malloc(sizeof(node));
 	if(New==NULL){
 		printf("overflow");
 		return start;
	    }
	New->info=item;
	New->next=start;
	start=New;
	end->next=Start
    
	  
 }
 
 int main()
 {
 	node* start==NULL;
	node*end==NULL;
 	int n,loc,item;
 	do{
        system("cls");//clrscr()  in turbo
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
 	
 }
 

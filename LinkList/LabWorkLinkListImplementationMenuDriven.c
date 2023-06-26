
#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
    
};
typedef struct node NodeType;
NodeType *head=NULL;
void insert_atfirst(int);
void insert_givenposition(int);
void insert_atend(int);
void delete_first();
void delete_last();
void delte_nthnode();
void print();
void search();
int main() {
   int choice;
   int item;
     printf("\n...Menu For Program...\n");
    printf("\n 1. Insert at first \n 2. Insert at given position \n 3. Insert at last \n 4. Delete first node\n 5. Delete last node\n 6. Delete nth node\n 7. Display or Print Nodes\n 8. Search item\n 9. Exit the Program\n");
   do{
  
    printf("\n Enter Your Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("\n Enter the item to be inserted:");
    scanf("%d",&item);
    insert_atfirst(item);
    break;
     case 2:
    printf("\n Enter the item to be inserted:");
    scanf("%d",&item);
    insert_givenposition(item);
    break;
     case 3:
    printf("\n Enter the item to be inserted:");
    scanf("%d",&item);
    insert_atend(item);
    break;
    case 4:
    delete_first();
    break;
    case 5:
    delete_last();
    break;
    case 6:
    delete_nthnode();
    break;
    case 7:
    print();
    break;
    case 8:
    search();
    break;
    default:
    printf("Invalid Choice!!\n");
        break;
    }
   }while(choice<9);

    return 0;
}
// Functions

void insert_atfirst(int item){
    NodeType *nnode;
    nnode=(NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    nnode->next=head;
    head=nnode;
    printf("%d inserted at first of linked list\n",item);
}
void insert_givenposition(int item){
    NodeType *nnode;
    NodeType *temp;
    int p,i;
    temp=head;
    nnode=(NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    if(head==NULL){
        nnode->next=NULL;
        head=nnode;
    }else{
        printf("Enter Position of a node at which you want o insert a new node:");
        scanf("%d",&p);
        for(int i=1; i<p-1; i++){
            temp=temp->next;

        }
nnode->next=temp->next;
        temp->next=nnode;
    }
     printf("%d inserted at the %d position of linked list\n",item,p);
}
void insert_atend(int item){
    NodeType *nnode;
    NodeType *temp;
    
    temp=head;
    nnode=(NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    if(head==NULL){
        nnode->next=NULL;
        head=nnode;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        nnode->next=NULL;
        temp->next=nnode;
    }
       printf("%d inserted at the end of linked list\n",item);
}

void delete_first(){
    NodeType *temp;
    if(head==NULL){
        printf("Void deletion\n");
        return;
    }else{
        temp=head;
        head=head->next;
        free(temp);
        printf("First Node Deleted Successfully!!\n");
    }
}
void delete_last(){
    NodeType *hold, *temp;
    if(head==NULL){
        printf("Void Deleteion\n");
        return;
    }else if(head->next==NULL){
        hold=head;
        head=NULL;
        free(hold);
    }else{
        temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=NULL;
        free(hold);
    }
        printf("Last Node Deleted Successfully!!\n");
}

void delete_nthnode(){
    NodeType *hold,*temp;
    int pos,i;
    if(head==NULL){
        printf("Void deletion\n");
        return;
    }else{
        temp=head;
        printf("Enter positon of node which node is to be deleted\n");
        scanf("%d",&pos);
        for(i=1; i<pos-1; i++){
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=hold->next;
        free(hold);
    }
    printf("The node at position %d deleted successfully\n",pos);
}
void print(){
    NodeType *temp;
    temp=head;
    printf("\n The Nodes are:");
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}

void search(){
    int flag=0;
    int key;
    printf("\n Enter item to be searched:");
    scanf("%d",&key);
    NodeType *temp;
    temp=head;
    while (temp!=NULL)
    {
      if(key==temp->info){
        flag=1;
        break;
      }
      temp=temp->next;
    }
    if(flag)
    {
 printf("\n The item %d found search successful!!\n",key);
    }
   else{
    printf("Data not found\n");
   }
    
}

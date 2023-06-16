// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;

//Inserting
void traverse(node *ptr){
    while(ptr!=NULL){
        
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        
    }
}
node *addfirst(node *head){
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=45;
    ptr->next=head;
    head=ptr;
    return head;
}

node *addatindex (node *head, int index, int value){
    node *ptr=(node*)malloc(sizeof(node));
    node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=value;
    ptr->next=p->next;
    p->next=ptr;
}

node *addatend (node *head, int value){
    node *ptr=(node*)malloc(sizeof(node));
    node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=value;
    p->next=ptr;
    ptr->next=NULL;
}

//Deleting
//at first
node *deletefirst (node *head){
    node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

//deleteatindex

node *deleteatindex(node *head, int index){
    node *p=head;
    node *ptr=head->next;
    
    for (int  i = 0; i < index-1; i++)
{
    p=p->next;
    ptr=ptr->next;
}
    p->next=ptr->next;
    free(ptr);
   
}

//deleteatend

node *deleteatend(node *head){
    node *p=head;
    node *ptr=head->next;
    while(ptr->next!=NULL){
        p=p->next;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    
}

//To count
void countelements(node *ptr){
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
        
    }
    printf("The no of element in linklist is %d", count );
}
//search elements

void searchelements(node *ptr) {
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int flag = 0;
    int i = 0;
    while (ptr != NULL) {
        if (key == ptr->data) {
            printf("Data found at index %d\n", i);
            flag = 1;
            break;  // Key found, exit the loop
        }
        ptr = ptr->next;
        i++;
    }
    if (flag == 0) {
        printf("Data not found\n");
    }
}

int main() {
   node *head=(node*)malloc(sizeof(node));
   node *second=(node*)malloc(sizeof(node));
   node *third=(node*)malloc(sizeof(node));
   node *fourth=(node*)malloc(sizeof(node));
   
   head->data=12;
   head->next=second;
   
second->data=13;
second->next=third;

third->data=15;
third->next=fourth;

fourth->data=18;
fourth->next=NULL;
  traverse(head);
  printf("\n");
  
  //Insertion
  
//   head=addfirst(head);
//   addatindex(head,2,199);
//   addatend(head,55);
//   printf("After adding\n");
//   traverse(head);
  
  
  printf("\n");
  //Deleting
  printf("After deleting\n");
  
  //Deleteatfirst
//  head= deletefirst(head);
 
 //deleteatindex
//  deleteatindex(head,2);


//deleteatend
// deleteatend(head);

  traverse(head);
  printf("\n");

//Count no of element in linklist
// countelements(head);

searchelements(head);
  
   
   

    return 0;
}

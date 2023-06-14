// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node *ptr){
  
    while(ptr!=NULL){
         printf("%d\t", ptr->data);
    ptr=ptr->next;
    }
   
}

struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
    ptr->next=head;
    
    head=ptr;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index){
     struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
     struct Node *p=head;
     int i=0;
     while (i!=index-1)
     {
        p=p->next;
        i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
   
     
}
struct Node *insertAtEnd(struct Node *head, int data){
      struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
       struct Node *p=head; 
    while(p->next!=NULL){
p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
  
     
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
      struct Node *fourth;
    
    //Allocate memory for nodes in the linked list in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
      fourth=(struct Node*)malloc(sizeof(struct Node));
    
    //link first and second node;
    head->data=7;
    head->next=second;
    
    //link second and thrid node;
    second->data=11;
    second->next=third;

    //link third and fourth node;
    third->data=33;
    third->next=fourth;

    
    // terminate the list at fourth node
    fourth->data=234;
    fourth->next=NULL;
    printf("Link List Before Insertion\n");
    linkListTraversal(head);
printf("\n");

//New Head
  printf("Link List After Insertion\n");
  // head= insertAtFirst(head,56);

  insertAtIndex(head,56,1);

  // head= insertAtEnd(head,51);
   printf("\n");
     linkListTraversal(head);
    return 0;
}
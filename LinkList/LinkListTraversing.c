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
    linkListTraversal(head);
    return 0;
}

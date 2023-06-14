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
//Delete at first
struct Node* DeleteFirst(struct Node *head){
struct Node *ptr=head; // if line 18 and 20 is not written than also it works
head=head->next;
free (ptr);
return head;
}

//Delete at index
struct Node* DeleteAtIndex(struct Node *head, int index){
struct Node*p=head;
struct Node*q=head->next;
for (int  i = 0; i < index-1; i++)
{
    p=p->next;
    q=q->next;
}
p->next=q->next;
free(q);
return head;

}

//Delete At last End

struct Node* DeleteAtEnd(struct Node *head){
struct Node *p=head;
struct Node*q=head->next;
while(q->next!=NULL){
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
// return head;

}

//Delete Element with Given Value

struct Node* DeleteWithValue(struct Node *head, int value){
struct Node*p=head;
struct Node*q=head->next;
while(q->data!=value && q->next!=NULL)
{
    p=p->next;
    q=q->next;
}
if(q->data=value){
    p->next=q->next;
    free(q);
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
    printf("Link List Before Deletion!!\n");
    linkListTraversal(head);
    printf("\n");

    printf("Link List After Deletion\n");
//    head= DeleteFirst(head);
//    head=DeleteAtIndex(head,2); 

//    head=DeleteAtEnd(head);
    // DeleteAtEnd(head);

    DeleteWithValue(head,11);

    linkListTraversal(head);
    return 0;
}
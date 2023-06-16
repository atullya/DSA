// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *top=NULL;
void push(int value){
    // jaba system runs out of memory teti bela matra stack full hunxa linklist use garda.....
    
     // yo inserting node at beginning ko logic ho..
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=value;
    ptr->next=top;
    top=ptr;
    printf("You just pushed %d item in stack\n",value);
}

void pop(){
    if(top==NULL){
        printf("Stack is EMpty!");
    }
    // yo deleting the first node ko logic ho..
   
    node *ptr=top;
    top=top->next;
    printf("You just popped %d item from stack\n",top->data);
    free(ptr);
}

void display(){
    if(top==NULL){
        printf("Stack is EMpty!\n");
    }else{
        printf("Elements in stack are\n");
         node *ptr=top;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    }
  
   
}
int main() {
    int choice;
    do{
        printf("Menus are:\n");
        printf("1:Push\n2:Pop\n3:Display\n4:Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            int value;
            printf("Enter the item to push in stack:");
            scanf("%d",&value);
            push(value);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();

            break;
            
            case 4:
            printf("Exiting the program...");
            exit(0);
            default:
            printf("Invalid INput!!");
        }
        
        
    }while(choice!=5);

    return 0;
}

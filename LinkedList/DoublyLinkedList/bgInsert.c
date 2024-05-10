// Implementation of Doubly Linked List, by inserting a node//

#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){

        struct Node *Head=NULL,*ptr;
        int a;

        while(1){

            ptr=(struct Node*)malloc(sizeof(struct Node));

            printf("Enter the value of data in the node: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                Head->prev=NULL;
                Head->next=NULL;
            }

            else{
                ptr->prev=NULL;
                ptr->next=Head;
                Head->prev=ptr;
                Head=ptr;
            }

            printf("\nEnter (1 or 0): ");
            scanf("%d",&a);

            if(a==0)
            break;

        }
        
        printf("\n");
        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");

        ptr=(struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter the value of the data in the new Node: ");
        scanf("%d",&ptr->data);

        ptr->next=Head;
        Head->prev=ptr;
        Head=ptr;


        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");
}
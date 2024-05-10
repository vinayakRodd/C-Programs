// Implementation of Doubly Linked List,by Inserting a Node at the End //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){

        struct Node *Head=NULL,*ptr,*p,*q;
        int a;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter the value of data in the new Node: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                Head->next=NULL;
                Head->prev=NULL;
            }

            else{

                ptr->next=Head;
                Head->prev=ptr;
                ptr->prev=NULL;
                Head=ptr;
            }

            printf("\nEnter (1 or 0): ");
            scanf("%d",&a);

            if(a==0)
            break;
        }

        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");

        ptr=(struct Node*)malloc(sizeof(struct Node));

        printf("\nEnter the value of data in the new Node: ");
        scanf("%d",&ptr->data);

        p=Head;
        while(p!=NULL){
            q=p;
            p=p->next;
        }

        q->next=ptr;
        ptr->next=NULL;

        ptr=Head;

        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");



}
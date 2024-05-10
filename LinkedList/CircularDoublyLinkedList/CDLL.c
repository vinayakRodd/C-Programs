//Implementation of Circular Doubly Linked List //

#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){

        struct Node *Head=NULL,*ptr,*p,*q;
        int a;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter the value of the data in the new Node: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                p=Head;
                
            }

            else{
                ptr->prev=p;
                ptr->next=Head;
                Head->prev=ptr;
                Head=ptr;
                p->next=ptr;

            }

            printf("\nEnter (1 or 0): ");
            scanf("%d",&a);

            if(a==0)
            break;

        }

        q=ptr;
        printf("\nThe Given List is: ");
        printf("\n");
        while(q!=p){
            printf("%d",q->data);
            printf("->");
            q=q->next;

            if(q==p){
                printf("%d",q->data);
                printf("->");
            }
        }

        printf("\nAfter Reversing the List: ");
        printf("\n");
        q=ptr;
        while(p!=q){
            printf("%d",p->data);
            printf("->");
            p=p->prev;

            if(p==q){
                printf("%d",p->data);
                printf("->");
            }
        }




}
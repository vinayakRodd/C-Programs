// Implementation of Circular Linked List //

#include <stdio.h>
#include <stdlib.h>

struct Node{
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
                ptr->next=Head;
                Head=ptr;
                p->next=Head;
            }

            printf("Enter (1 or 0): ");
            scanf("%d",&a);

            if(a==0)
            break;

        }

        
        q=Head;
        while(q!=p){
            printf("%d",q->data);
            printf("->");
            q=q->next;

            if(q==p)
            printf("%d",q->data);
        }
        printf("\n");
        printf("%d",q->next->data);

}
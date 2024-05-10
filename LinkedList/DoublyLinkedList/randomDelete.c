// Implementation of Circular Singly Linked List,by Deleting a Node //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){

        struct Node *Head=NULL,*ptr,*p,*q,*r;
        int a,i;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter the value of the data in the New Node: ");
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

        

        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");

        printf("\nEnter the value of data in Node to Delete the Node: ");
        scanf("%d",&i);

        p=Head;
        while((p->data)!=i)
        {
            q=p;
            p=p->next;

        }

        q->next=p->next;
        r=Head;
        while(r!=NULL){
            printf("%d",r->data);
            printf("->");
            r=r->next;
        }

        printf("NULL");
}
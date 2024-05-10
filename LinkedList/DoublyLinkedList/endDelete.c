// Implementation of Doubly Linked List, by deleting the node from the end //

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

        printf("Enter the value of the data in the new Node : ");
        scanf("%d",&ptr->data);

        if(Head==NULL){

            Head=ptr;
            Head->next=NULL;
            Head->prev=NULL;
        }

        else{
            
            ptr->next=NULL;
            p=Head;
            while(p!=NULL){
                q=p;
                p=p->next;
            }

            q->next=ptr;
            ptr->next=NULL;
            ptr->prev=q;
        
        }

        printf("\nEnter (1 or 0): ");
        scanf("%d",&a);

        if(a==0)
        break;

    }


    r=Head;
    printf("\n");
    while(r!=NULL){
        printf("%d",r->data);
        printf("->");
        r=r->next;
    }
    printf("NULL");


    printf("\nEnter the value of the data in the Node that is to be deleted: ");
    scanf("%d",&i);

    p=Head;
    while((p->data)!=i){
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
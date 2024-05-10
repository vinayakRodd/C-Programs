// Implementation of Doubly Linked List,Inserting a node Randomly //

#include <stdio.h>
#include <stdlib.h>


struct Node {
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
                Head->next=NULL;
                Head->prev=NULL;
            }

            else{

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


        p=Head;
        ptr=(struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter the value of data: ");
        scanf("%d",&ptr->data);
        printf("\nEnter the value of the data in the new which is to be inserted: ");
        scanf("%d",&i);
        while((p->data)!=i){
            q=p;
            p=p->next;
        }

        
        q->next=ptr;
        ptr->prev=q;
        ptr->next=p;
        p->prev=ptr;
    
        r=Head;
        while(r!=NULL){
            printf("%d",r->data);
            printf("->");
            r=r->next;

        }

        printf("NULL");
        


}
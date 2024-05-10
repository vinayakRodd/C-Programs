// Implementation of Linked list, by inserting a Node //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void randomInsert(struct Node *);

int main(){

        struct Node *ptr;

        randomInsert(ptr);
}


void randomInsert(struct Node *ptr){

        struct Node *Head=NULL,*p,*q;
        int a,n;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter the value: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                Head->next=NULL;
                
            }

            else{

                ptr->next=Head;
                Head=ptr;
                
    
            }

            printf("\nEnter the value(1 or 0): ");
            scanf("%d",&a);

            if(a==0)
            break;
        }

        p=Head;
        while(p!=NULL){
            printf("%d",p->data);
            printf("->");
            p=p->next;
        }

        ptr=(struct Node *)malloc(sizeof(struct Node));

        printf("\nEnter the value for the new Node: ");
        scanf("%d",&ptr->data);

        printf("\nEnter the data at which the Node will be Inserted: ");
        scanf("%d",&n);

        p=Head;
        while((p->data)!=n){
            q=p;
            p=p->next;

        }

        
        
        q->next=ptr;
        ptr->next=p;
        
        
        q=Head;
        while(q!=NULL){
            printf("%d",q->data);
            printf("->");
            q=q->next;
        }


}
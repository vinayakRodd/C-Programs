// Implementation of Linked list,by Deleting a Node //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void bgInsert(struct Node*);
void randomDelete(struct Node *,struct Node*,struct Node*);

int main(){

        struct Node *ptr;
        bgInsert(ptr);
        
}

void bgInsert(struct Node *ptr){

        struct Node *Head=NULL,*p;
        int a;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("\nEnter the data: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                Head->next=NULL;
            }

            else{
                
                ptr->next=Head;
                Head=ptr;


            }
        
            printf("\nEnter the value(0 or 1): ");
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

        randomDelete(Head,p,ptr);

}

void randomDelete(struct Node *Head,struct Node *p,struct Node *ptr){

        struct Node *q;
        int i;
        printf("\nEnter the value of the Node which is to be Deleted: ");
        scanf("%d",&i);

        p=Head;
        while((p->data)!=i){
            ptr=p;
            p=p->next;

        }

        ptr->next=p->next;

        q=Head;

        while(q!=NULL){
            printf("%d",q->data);
            printf("->");
            q=q->next;
        }
}
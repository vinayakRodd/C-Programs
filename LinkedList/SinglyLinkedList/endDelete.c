// Implementation of Linked List, by Deleting a Node from the list //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void endDelete(struct Node*);

int main(){

        struct Node *ptr;

        endDelete(ptr);
}

void endDelete(struct Node *ptr){

        struct Node *Head=NULL,*p,*q,*r;
        int a,i;

        while(1){

            ptr=(struct Node*)malloc(sizeof(struct Node));
            printf("Enter the value: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                p=Head;
                Head->next=NULL;
            }

            else{
                
                ptr->next=NULL;
                while((p->next)!=NULL){
                    p=p->next;
                }
                
                p->next=ptr;
            }

            printf("\nEnter (1 or 0): ");
            scanf("%d",&a);
            
            if(a==0)
            break;

        }

        

        q=Head;
        while(q!=NULL){
            printf("%d",q->data);
            printf("->");
            q=q->next;
        }


        printf("\nEnter the value in the list: ");
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


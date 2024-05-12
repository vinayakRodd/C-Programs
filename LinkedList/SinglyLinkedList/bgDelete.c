// Implementation of Linked List, by deleting a Node in the list //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void bgDelete(struct Node *);

int main(){

        struct Node *ptr;

        bgDelete(ptr);
}

void bgDelete(struct Node *ptr){

        struct Node *Head=NULL,*p,*q;
        int a,i;

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

        printf("\nEnter the value in the list: ");
        scanf("%d",&i);

        p=Head;
        if(p->data == i){
            Head = p->next;
            
        }
        while((p->data)!=i){
            p=p->next;
        }

        p=p->next;
        ptr->next=p;
        p=NULL;

        q=Head;
        while(q!=NULL){
            printf("%d",q->data);
            printf("->");
            q=q->next;
        }

}

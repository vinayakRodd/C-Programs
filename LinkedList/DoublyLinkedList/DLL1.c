// Implementation of Doubly Linked List //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;

};


int main(){

        struct Node *Head=NULL,*ptr,*p;
        int a;

        while(1)
        {
                ptr=(struct Node *)malloc(sizeof(struct Node));
                printf("Enter the value of data in the Node: ");
                scanf("%d",&ptr->data);

                if(Head==NULL){
                    Head=ptr;
                    Head->prev=NULL;
                    Head->next=NULL;
                }

                else{
                    ptr->next=Head;
                    ptr->prev=NULL;
                    Head->prev=ptr;
                    Head=ptr;
                }

                printf("\nEnter (1 or 0): ");
                scanf("%d",&a);

                if(a==0)
                break;

        }

        printf("\nDisplaying the Linked List using next Pointer:");
        printf("\n");
        while(ptr!=NULL){
            p=ptr;
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");

        printf("\nDisplaying the Linked List using previous Pointer:");
        printf("\n");
        while(p!=NULL){
            printf("%d",p->data);
            printf("->");
            p=p->prev;
        }

        printf("NULL");


}
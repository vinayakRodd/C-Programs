// Implementation of Doubly Linked List,by Deleting a node in the Beginning//

#include <stdio.h>
#include <stdlib.h>

struct Node{

    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){
    
        struct Node *Head=NULL,*ptr;
        int a;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter the value of the new node: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                Head->prev=NULL;
                Head->next=NULL;
            }

            else{

                ptr->next=Head;
                Head->prev=ptr;
                ptr->prev=NULL;
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

        ptr=Head;
        Head=ptr->next;
        ptr=Head;

        printf("\n");
        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");

}
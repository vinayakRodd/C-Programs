// Implementation of Linked List by Inserting a node at the beginning //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void bgInsert(struct Node *);

int main(){

        struct Node *ptr;

        bgInsert(ptr);

}

void bgInsert(struct Node *ptr){

    struct Node *Head=NULL;
    int a;

    while(1){

        ptr=(struct Node*)malloc(sizeof(struct Node));

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

        printf("\nPress 1(Continue), Press 0(Stop): ");
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
}
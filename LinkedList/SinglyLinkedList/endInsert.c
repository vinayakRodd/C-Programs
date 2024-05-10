// Implementation of Linked List, by Inserting a Node at the End //

#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *next;
};


void endInsert(struct Node*);

int main(){

        struct Node *ptr;
        endInsert(ptr);
}

void endInsert(struct Node *ptr){

        struct Node *Head=NULL,*p,*q;
        int a;

        while(1){

            ptr=(struct Node*)malloc(sizeof(struct Node));

            printf("Enter the value: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){

                Head=ptr;
                p=ptr;
                q=ptr;
                Head->next=NULL;
            }

            else{

                ptr->next=NULL;
                while((p->next)!=NULL){
                    p=p->next;
                    
                }

                p->next=ptr;
        

            }
            printf("\nPress 1(Continue) or 0(Stop): ");
            scanf("%d",&a);

            if(a==0)
            break;
        }

            while(q!=NULL){

                printf("%d",q->data);
                printf("->");
                q=q->next;
            }


}

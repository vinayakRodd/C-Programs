// Implementation of Linked List,by searching the data in the node from the list //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void search(struct Node *);

int main(){

        struct Node *ptr;
        search(ptr);
        
}

void search(struct Node *ptr){

        struct Node *Head=NULL,*p;
        int a,i;

        while(1){

            ptr=(struct Node *)malloc(sizeof(struct Node));

            printf("Enter the value in the node: ");
            scanf("%d",&ptr->data);

            if(Head==NULL){
                Head=ptr;
                Head->next=NULL;
            }

            else{

                ptr->next=Head;
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

        printf("\nEnter the value of data in the node to search whether the node exists or not: ");
        scanf("%d",&i);

        p=Head;
        while((p->data)!=i){
            p=p->next;

            if((p->next)==NULL){
                printf("\nPointed till NULL");
                break;
            }
        }

        if((p->data)==i){
            printf("\nNode Exists and the value of data  = %d",p->data);
        }

        else{
            printf("\nNode Does not Exist");
        }

}

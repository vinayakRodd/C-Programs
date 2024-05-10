// Implementation of Circular Linked List,by Inserting a node at the end //

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){

    struct Node *Head=NULL,*ptr,*p,*q;
    int a;


    while(1){

        ptr=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value of the data in the new Node: ");
        scanf("%d",&ptr->data);
    
        if(Head==NULL){
            Head=ptr;
            p=ptr;
        }

        else{

            p->next=ptr;
            p=p->next;
        }

        printf("\nEnter (1 or 0): ");
        scanf("%d",&a);

        if(a==0)
        break;
    }

    p->next=Head;
    
    printf("%d",p->next->data);

    q=Head;
    printf("\n");
    while(q!=ptr){
        
        printf("%d",q->data);
        printf("->");
        q=q->next;

        if(q==ptr){
            printf("%d",q->data);
            printf("->");
        }
    }


    printf("\n");
    printf("%d",q->next->data);






    

}
// Implementation of Reversing a Singly Linked List //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;

};

int main(){

        struct Node *Head=NULL,*ptr,*p,*q,*prev=NULL,*current,*front;
        int a;
        while(1){
            ptr=(struct Node *)malloc(sizeof(struct Node));
            printf("Enter the value of the data: ");
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
        printf("NULL");
        
        // Reversing Operation //
        
        

        current = Head;
        front = Head;
        
        while(front != NULL){
            
            
            front = front -> next ;
            current -> next = prev;
            prev = current;
            current = front;
            
        }
        
        ptr = prev;
        
        printf("\n");
        
        while(ptr != NULL){
            
            printf("%d -> ",ptr->data);
            ptr = ptr -> next;
            
        }
        printf("NULL");
        



}

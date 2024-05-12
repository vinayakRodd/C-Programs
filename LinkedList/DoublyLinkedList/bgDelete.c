 // Implementation of Deletion of Node in Doubly LinkedList //
#include <stdio.h>
#include <stdlib.h>

struct Node{

    struct Node *prev;
    int data;
    struct Node *next;
};

int main(){
    
        struct Node *Head=NULL,*ptr,*p,*q;
        int a,val;

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

        printf("\nEnter the value of node to delete: ");
        scanf("%d",&val);
        
        p=Head;
        
        if(p->data == val){
            Head = p->next;
            Head->prev = NULL;
            
        }
        
        else{
            
            while(p->data != val){
                ptr = p;
                p = p -> next;
            }
            
            if(p -> next != NULL){
                q = p -> next;
                ptr -> next = p -> next;
                q -> prev = ptr;
            }
            
            else{
                
                ptr -> next = NULL;
            }
            
            
        }
        
        ptr = Head;

        printf("\n");
        while(ptr!=NULL){
            printf("%d",ptr->data);
            printf("->");
            ptr=ptr->next;
        }

        printf("NULL");

}

// Implementation of Circular List, by Deleting the Node //

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){

        struct Node *Head=NULL,*ptr,*p,*q;
        int a,val;

        while(1){

        ptr=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value of the data in the new Node: ");
        scanf("%d",&ptr->data);

        if(Head==NULL){
        
            Head=ptr;
            p=Head;
            p -> next=ptr;
        }

        else{

            
            ptr -> next = Head;
            p -> next=ptr;
            Head = ptr;
            
            
            
           
            }

        printf("\nEnter (1 or 0): ");
        scanf("%d",&a);

        if(a==0)
        break;

        }
        
        
        q = Head;
        
        
        printf("\n");
        
        do{
            
            printf("%d -> ",q->data);
            q = q -> next;
        }while(q != Head);
        
        printf("NULL");

        printf("\nEnter the value of node to delete: ");
        scanf("%d",&val);
        
        q=Head;
        
        if(q->data == val){
            Head = q->next;
            p -> next = Head;
        }
        
        else{
            
            while(q->data != val){
                ptr = q;
                q = q -> next;
            }
            
            ptr -> next = q -> next;
            
            
        }
        
        q = Head;
        
        do{
            
            printf("%d -> ",q->data);
            q = q -> next;
        }while(q != Head);
        
        printf("NULL");

}

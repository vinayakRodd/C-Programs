#include <stdio.h>
#include <stdlib.h>

#define V 5

struct Node{

    int data;
    struct Node *next;
};


struct Node *adjList[V];

void init(){



        for(int i=0; i<V; i++){
            adjList[i] = NULL;
        }

}

void addEdge(int src,int dest){

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = dest;

        if(adjList[src] == NULL){

            adjList[src] = newNode;
            newNode->next = NULL;
        }

        else{

        /*
            struct Node *temp = adjList[src];
            while(temp -> next != NULL){
                temp = temp ->next;
            }

            temp -> next = newNode;
        */
        // Instead of traversing till the end of the node, we can add the nodes at the beginning so that time complexity is reduced //


            newNode -> next = adjList[src];
            adjList[src] = newNode;
        }

}


void ShowGraph(int src){

        struct Node *move = adjList[src];

        while(move != NULL){
            printf("%d -> ",move->data);
            move = move -> next;
        }
        printf("NULL");
}


void deleteNode(int src,int dest){

        struct Node *temp,*current;

        
        current = adjList[src];

        while(current->data != dest){

            temp = current;
            current = current -> next;
        }

        if(current == adjList[src]){
            adjList[src] = current -> next;
            free(current);
        }

        else{

            temp -> next = current -> next;
            free(current);
        }

        temp = adjList[src];

        while(temp != NULL){
            printf("%d -> ",temp->data);
            temp = temp -> next;

        }
        printf("NULL");

}

int main(){


        init();
        printf("Hello");
        addEdge(0,1);
        addEdge(0,2);
        addEdge(0,3);
        addEdge(1,3);
        addEdge(1,4);
        addEdge(2,3);
        addEdge(3,4);

        int src,dest;
        printf("\nEnter the Src value: ");
        scanf("%d",&src);
        ShowGraph(src);

        printf("\nEnter the src and Dest to remove a node from adjacency List: ");
        scanf("%d%d",&src,&dest);

        deleteNode(src,dest);
}
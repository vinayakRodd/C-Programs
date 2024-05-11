#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;
    struct Node *left;
    struct Node *right;

};

/*
struct Node *newNode(int key,struct Node *root){

        if(root == NULL){
            root = malloc(sizeof(struct Node));
            root -> data = key;
            root -> left = NULL;
            root -> right = NULL;
        }
        
        return root;
        
}

*/

int getMinNode(struct Node *root){
    
        struct Node *temp=root ;
        
        while(temp->left != NULL){
            
            temp = temp -> left;
        }
        
        
        return temp->data;
        
}

struct Node *getNewNode(int val){

    struct Node *newNode = malloc(sizeof(struct Node));

        newNode -> data = val;
        newNode -> left = NULL;
        newNode -> right = NULL;

    return newNode;
}

struct Node *insertNode(struct Node *root,int val){

        
        if(root == NULL){
            return getNewNode(val);
        }
        
        
        if(val < root -> data)
            root->left = insertNode(root->left,val);
        
        else
        if(val > root -> data)
            root->right = insertNode(root->right,val);
        
            
        

        return root;


}

void PrintNode(struct Node *root){
    
        if(root == NULL)
            return;
        
        else{
            
            PrintNode(root->left);
            printf("%d ",root->data);
            PrintNode(root->right);
        }
}


struct Node *removeNode(struct Node *root,int val){
    
        
    
        if(root == NULL)
            return NULL;
            
        else
            if(val < root -> data)
                root -> left = removeNode(root->left,val);
                
        else
            if(val > root -> data)
                root -> right = removeNode(root->right,val);
            
        else{
            
            if(root -> left == NULL && root -> right == NULL){
                
                free(root);
                return NULL;
            }
            
            else
                if(root -> left == NULL){
                    
                    struct Node *temp = root -> right;
                    
                    free(root);
                    return temp;
                    
                }
                
            else
                if(root -> right == NULL){
                    
                    struct Node *temp = root -> left;
                    free(root);
                    return temp;
                }
                
            else{
                
                    int getMinVal = getMinNode(root->right); 
                    root -> data = getMinVal;
                    root -> right = removeNode(root->right,getMinVal);
                }
                
            
        }
        
        return root;
}



int main(){


        struct Node *root = NULL;
        

        //root = newNode(key,root);

        root = insertNode(root,10);

        printf("Root -> data = %d",root->data);
        printf("\n");
        
        root = insertNode(root,8);
        root = insertNode(root,6);
        root = insertNode(root,4);
        root = insertNode(root,14);
        root = insertNode(root,13);
        root = insertNode(root,16);
        root = insertNode(root,15);
        
        
        
        PrintNode(root);
        
        root = removeNode(root,14);
        
        printf("\n");
        PrintNode(root);
        
        

        
        

}
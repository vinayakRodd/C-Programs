// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[100][100],b[100][100],c[100][100]={0},i,j,m,n,k,x;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    
    printf("\nEnter the elements of Matrix A: ");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nMatrix A:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter the elements of Matrix B: ");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            
            scanf("%d",&b[i][j]);
        }
            
    }
    
    printf("\nMatrix B:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
    if(m==n){
        
        printf("\nMatrix Multiplication is possible");
        
    for(k=0; k<m; k++){ 
        
            x=0;
            for(i=0; i<m; i++){
            
                for(j=0; j<n; j++)
                
                    c[k][x] = c[k][x] + a[k][j] * b[j][i];
                    
                x++;
            }
        }
    }
    
    
    else
        printf("\nMatrix Multiplication is not Possible");
        
    printf("\nMatrix C:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            printf("%d ",c[i][j]);
            
        printf("\n");
    }
    
    
    
    

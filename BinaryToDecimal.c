// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    int arr[10],num;
    
    printf("Enter the number of Bits: ");
    scanf("%d",&num);
    
    
    printf("\nEnter the Binary Number: ");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    
    int end = num-1;
    
    
    int BinaryVal = 0;
    for(int i = end; i>=0; i--){
        
        if(arr[i] != 0)
            BinaryVal += pow(2,end-i)*arr[i];
            
    }
    
    printf("\nDecimal Value of the Binary Number is : %d",BinaryVal);
    
    

    return 0;
}

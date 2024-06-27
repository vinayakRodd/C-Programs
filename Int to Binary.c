// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int num;

    
    int rem;
    
    int i=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    int divisor = num;
    
    int size = log2(num);
    int arr[size+1];
    
    
    
    while(divisor != 1){
        
        rem = divisor % 2;
        arr[i++] = rem;
        
        divisor = divisor / 2;
        
    }
    
    arr[i++] = divisor;
    
    
    
    printf("\nBinary of the given number is : ");
    for(int j=i-1; j>=0; j--)
        printf("%d",arr[j]);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num,rem,arr[100];
    int temp ;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    temp = num;
    
    
    int count = 0;
    while(temp != 1){
        
        temp /= 2;
        count++;
    }
    
    int end = count + 1;

    while(num != 0){
        
        rem = num % 2;
        
        arr[count] = rem;
        count--;
        
        num /= 2;
        
        
    }
    
    printf("\nBinary Conversion: ");
    for(int i=0; i<end; i++)
        printf("%d",arr[i]);

    return 0;
}



#include <stdio.h>


int main(){


        int arr[10],temp[10] = {0},n,flag,count=0,i,j;

        printf("Enter the no of elements: ");
        scanf("%d",&n);


        printf("\nEnter the elements of Array: ");
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);



        for(i=0; i<n; i++){
            flag = 0;



            for(j=0; j<=count; j++){

                if(arr[i] == temp[j]){

                    flag = 1;
                    break;
                }



                if(i>0 && j==count-1)
                    break;

            }

            if(flag == 0){
                temp[count] = arr[i];
                count++;
            }
        }

        printf("\nAfter Removing the Duplicates: ");
        for(int k=0; k<count; k++)
            printf("%d ",temp[k]);




}

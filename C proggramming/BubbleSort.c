#include <stdio.h>

int main() {

int arr[] = {5, 1, 4, 2, 8}; 
int size  = sizeof(arr) / sizeof(int) ;  

    int swapped = 0 ; 
    for(int i = 0  ; i < size-1 ; i++){
        swapped = 0 ; 
        for(int  j  = 0 ; j < size-1 ; j++){
            if (arr[j] > arr[j+1]){
               
                int temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] =  temp ;
                 
                swapped = 1 ; 
            }
           
        }
         if(swapped == 0 ){
                break ; 
            }
    }
    for(int i = 0 ; i < size ; i++){
        printf("%d" , arr[i]);
    }
   
} 

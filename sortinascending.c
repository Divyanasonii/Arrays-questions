#include<stdio.h>
int main () {
    int arr[7];
    int temp;

    printf("enter 7 elements : ");

    for(int i = 0; i<7; i++){
        scanf("%d" , &arr[i]);
    }
    //sorting 
    for(int i = 0; i<7; i++){
        for(int j = i + 1; j<7; j++){
            if(arr[i]> arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            
            }
            
        }
        
    }
    printf("after sorting in ascending order : ");

    for(int i = 0; i<7; i++){
        printf("%d" , arr[i]);
    }

    return 0;
}
#include<stdio.h>
int main () {
    int arr[7];
    

    printf("enter 7 elements : ");
    for(int i = 1; i<7; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for(int i = 1; i<7; i++){
        if ( min > arr[i]){
            min = arr[i];
        }
       
    }
     printf("minimum value element : %d" , min);
    return 0;
}
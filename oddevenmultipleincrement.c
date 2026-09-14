#include<stdio.h>
int main () {

    int arr[6];
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<6;i++){
        if(i %2 !=0){
            arr[i] = arr[i]*2;
        }
        else {
            arr[i] = arr[i] + 10;
        }
        
    }
    for(int i = 0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
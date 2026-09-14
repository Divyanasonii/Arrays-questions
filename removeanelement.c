#include<stdio.h>
int main () {

    int arr[5];
    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int position;
    printf("enter position : ");
    scanf("%d", &position);
    
    for(int i = position; i<4; i++){
        arr[i] = arr[i + 1];
    }
    for(int i = 0; i<4; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
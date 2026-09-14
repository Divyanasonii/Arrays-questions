#include<stdio.h>
int main () {

    int arr[5];
    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int temp;
    temp = arr[0];

    for(int i = 0; i<4; i++){
        arr[i] = arr[i + 1];
    }
   arr[4] = temp;

    printf("Rotated array: ");
    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
#include<stdio.h>
int main () {

    int arr[6];
    int num;
    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int position;
    printf("enter position : ");
    scanf("%d", &position);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for(int i = 5; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = num;

    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
   

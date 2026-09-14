#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 4; i++) {
        if(arr[i] < arr[i + 1]) {
            printf("Array is not in descending order");
            return 0;
        }
    }

    printf("Array is in descending order");

    return 0;
}
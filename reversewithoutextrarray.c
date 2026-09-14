#include<stdio.h>
int main () {
        int arr[6];
        printf("enter 6 elements : ");
        for(int i = 0; i<6; i++){
            scanf("%d", &arr[i]);
        }

        int temp;
        for(int i = 0; i<6/2; i++){
            temp = arr[i];
            arr[i] = arr[5 - i];
            arr[5-i]= temp;
        }

        for(int i = 0; i<6; i++){
            printf("%d ", arr[i]);
        }
    return 0;
}
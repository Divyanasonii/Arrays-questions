#include<stdio.h>
int main () {
    int brr[6];
    int arr[6];
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<6; i++){
        brr[i] = arr[5 -i];
        
    }
    for(int i = 0; i<6; i++){
        printf("%d ", brr[i]);
    }
    return 0;
}
#include<stdio.h>
int main () {
    int arr[6];


    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d", &arr[i]);
    }

        int max = arr[0];
    for(int i = 1; i<6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("maximum value element : %d", max);
    return 0;
}
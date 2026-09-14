#include<stdio.h>
int main () {
    int arr[7];
    printf("enter 7 elements : ");
    for(int i = 0; i<7; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<7; i++){
        for(int j = i + 1; j<7; j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element" , arr[i]);
            }
        }
    }
    return 0;
}
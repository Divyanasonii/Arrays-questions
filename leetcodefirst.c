#include<stdio.h>
int main () {
    int arr[5];
    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d" , &arr[i]);
    }
    int target;
    printf("enter target number : ");
    scanf("%d" , &target);

    for(int i = 0; i<5; i++){
        for(int j = i +1; j<5; j++){
            if(arr[i] + arr[j] == target){
                printf("%d %d", i, j );
            }
        }
    }
    return 0;
}
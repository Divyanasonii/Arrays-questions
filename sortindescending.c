#include<stdio.h>
int main () {

    int arr[5];
    int temp;

    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d" , &arr[i]);
    }

    //sorting 
    for(int i = 0; i<5; i++){
        for(int j = i + 1; j <5; j++){
            if(arr[i]< arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("after sorting in descending order : ");
    for(int i = 0; i<5; i++){
        printf("%d" , arr[i]);
    }
    return 0;
}
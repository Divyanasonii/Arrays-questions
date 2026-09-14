#include<stdio.h>
int main () {
    int arr[6];
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    int flag = 1;
    for(int i = 0; i<6; i++){
        if(arr[i]= arr[5-i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("palindrome array");
    }
    else {
        printf("not an palindrome array");
    }

    return 0;
}
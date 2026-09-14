#include<stdio.h>
int main () {
    int num;
    int arr[5];
    printf("enter 5 elements : ");
    for(int i = 0;i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("element to search : ");
    scanf("%d", &num);

       for(int i = 0; i<5; i++){
           if(num == arr[i]){
            printf("element found");
            break;
           }
           else {
            printf("element not found");
           }
    }
    return 0;
}
#include<stdio.h>
int main () {
    int sum = 0;
    int arr [5];
    printf("enter elements : " );
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\n");
    printf("sum = %d" , sum);
    return 0;
}
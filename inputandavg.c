#include<stdio.h>
int main () {

    int arr[5];
    float average;
    int sum = 0;

    for(int i = 0; i<5; i++){
        printf("enter element number %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\n");
    average =sum/5;
    printf("average = %f", average);
    return 0;
}
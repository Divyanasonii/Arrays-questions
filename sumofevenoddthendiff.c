#include<stdio.h>
int main () { 
    int arr[6];
    int sumEven = 0;
    int sumOdd = 0;
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0; i<6; i++){
        if(i % 2 == 0){
            sumEven = sumEven + arr[i];
        }
        else {
            sumOdd= sumOdd + arr[i];
        }
    }
    printf("%d", sumEven - sumOdd);
    return 0;
}
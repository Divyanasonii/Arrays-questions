#include<stdio.h>
int main () {
    int arr [5];
    int product = 1;

    for(int i = 0; i<5; i++){
        printf("enter element %d\n" , i +1);
        scanf("%d" , &arr[i]);
        product = product * arr[i];
    }
    printf("product = %d" , product);

    return 0;
    
}
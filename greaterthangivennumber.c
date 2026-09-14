#include<stdio.h>
int main () { 
    int arr[6];
    int num;
    int count = 0;
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    printf("given number : ");
    scanf("%d", &num);

    for(int i = 0; i<6; i++){
        if(arr[i] > num)
        count++;
        
    }
    printf("%d elements are greater than %d", count,num);
    return 0;
}
#include<stdio.h>
int main () {

    int arr[5];
    int num, count = 0;

    printf("enter 5 elements : ");

    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter element to count: ");
    scanf("%d" , &num);

    for(int i = 0; i<5; i++){
        if(arr[i] == num)
        count++;

    }
    printf("%d occurs %d times", num, count);


    return 0;
}
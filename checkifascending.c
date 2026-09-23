#include<stdio.h>
int main () {
    int arr[5];
    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

   for(int i = 0; i<5; i++){
    for(int j = i +1; j<5; j++){
        if(arr[i]>arr[j]){
            printf("Not in ascending order");
            return 0;
        }
    }
   }
   printf("in ascending order");

   return 0;
}
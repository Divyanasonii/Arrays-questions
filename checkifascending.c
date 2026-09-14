#include<stdio.h>
int main () {
    int arr[5];
    printf("enter 5 elements : ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    int ascending = 1;

   for(int i = 0; i<5; i++){
    for(int j = i +1; j<5; j++){
        if(arr[i]>arr[j])
        ascending=0;
        break;
    }
    if(ascending==0)
    break;
   }
   if(ascending){
    printf("array is in ascending order");
   }
   else {
    printf("array is not in ascending order");
   }

   return 0;
}
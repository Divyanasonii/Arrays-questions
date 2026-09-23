#include<stdio.h>
int main () {
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        for(int j = i +1; j<5; j++){
            if(arr[i]<arr[j]){
                printf("not in descending order");
                return 0;
            }
        }
    }
    printf("in descending order");
    return 0;
}
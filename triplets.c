#include<stdio.h>
int main () { 
    int arr[6];
    int x;
    int totaltriplets = 0;
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d" , &arr[i]);
    }
    printf("enter value : ");
    scanf("%d" , &x);
    for(int i = 0; i<6; i++){
        for(int j = i + 1; j<6; j++){
            for(int k = j + 1; k<6; k++){
                if(arr[i] + arr[j]+ arr[k] == x){
                    totaltriplets++;
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", totaltriplets);
    
    return 0;
}
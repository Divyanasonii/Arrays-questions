#include<stdio.h>
int main () {
    int totalpairs = 0;
    int arr[6];
    int x;
    printf("enter 6 elements : ");
    for(int i = 0; i<6; i++){
        scanf("%d" , &arr[i]);
    }
    printf("given number : ");
    scanf("%d" , &x);

    for(int i = 0; i<=6; i++){
        for(int j = i+1; j<=6; j++){
            if(arr[i]+ arr[j] == x){
                totalpairs++;
                printf("(%d %d)\n",arr[i], arr[j] );
            }
        }
    }
    printf("%d" , totalpairs);
    return 0;
}
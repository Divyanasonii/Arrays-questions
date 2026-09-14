#include <stdio.h>
#include<limits.h>
int main() {
    int arr[6];

    printf("enter 6 elements : ");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < 6; i++) {
        if(arr[i] > max) {
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    printf("second largest element : %d", smax);

    return 0;
}
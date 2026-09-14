#include <stdio.h>

int main() {
    int arr[6];
    int visited[6] = {0};

    printf("Enter 6 elements: ");

    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 6; i++) {

        if(visited[i] == 1)
            continue;

        int count = 1;

        for(int j = i + 1; j < 6; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
#include <stdio.h>
int main() {

    int arr[6] = {2, 3, 2, 5, 3, 2};
    for (int i = 0; i < 6; i++) {
        int count = 1;
        int already = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                already = 1;
                break;
            }
        }

        if (already == 1)
            continue;

        // Count frequency
        for (int j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        printf("%d = %d times\n", arr[i], count);
    }

    return 0;
}
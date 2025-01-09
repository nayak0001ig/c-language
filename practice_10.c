#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int max = arr[0], second_max = arr[0], i;
    
    for(i = 1; i < 5; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    
    printf("Second largest element: %d\n", second_max);
    return 0;
}

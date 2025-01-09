#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 15, 40};
    int max = arr[0], i;
    
    for(i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];          }
    }
    
    printf("Largest element: %d\n", max);
    return 0;
}

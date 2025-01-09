#include <stdio.h>

int main() {
    int arr[] = {12, 23, 9, 5, 14};
    int min = arr[0], i;
    
    for(i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];          }
    }
    
    printf("Smallest element: %d\n", min);
    return 0;
}

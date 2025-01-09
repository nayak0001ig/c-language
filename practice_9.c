#include <stdio.h>

int main() {
    int arr[] = {0, 1, 9, 0, 5, 0, 3};
    int n = 7, i, j = 0;
    
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];          }
    }
    
    // Fill the remaining positions with zeros
    for(i = j; i < n; i++) {
        arr[i] = 0;
    }
    
    printf("Array after moving zeros: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

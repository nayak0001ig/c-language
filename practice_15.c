#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int merged[6], i, j = 0;
    
    for(i = 0; i < 3; i++) {
        merged[i] = arr1[i];
    
    for(i = 3; i < 6; i++) {
        merged[i] = arr2[j++];
    }
    
    printf("Merged array: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int even_count = 0, odd_count = 0, i;
    
    for(i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("Even elements: %d\n", even_count);
    printf("Odd elements: %d\n", odd_count);
    return 0;
}

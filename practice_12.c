#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 1};
    int element = 1, count = 0, i;
    
    for(i = 0; i < 7; i++) {
        if(arr[i] == element) {
            count++;
        }
    }
    
    printf("Element %d occurs %d times\n", element, count);
    return 0;
}

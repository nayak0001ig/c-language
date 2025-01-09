#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30, found = 0, i;
    
    for(i = 0; i < 5; i++) {
        if(arr[i] == target) {
            found = 1;
            break;
        }
    }
    
    if(found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}

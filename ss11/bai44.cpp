#include <stdio.h>

int tim_max(int arr[], int size) {
    int max = arr[0]; 
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    
    return max;  
}

int main() {
    int arr[] = {10, 50, 30, 60, 20};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    int max = tim_max(arr, size);
    printf("So lon nhat trong mang là: %d\n", max);

    return 0;
}


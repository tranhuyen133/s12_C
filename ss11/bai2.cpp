#include <stdio.h>

void in_mang(int arr[], int size) {
    printf("Các phan tu trong mang là: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    in_mang(arr, size);

    return 0;
}


#include <stdio.h>


int giai_thua(int n) {
    int result = 1; 

  
    if (n < 0) {
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        result *= i; 
    }

    return result;  
}

int main() {
    int n;

    printf("Nh?p m?t s? nguyên: ");
    scanf("%d", &n);

    int result = giai_thua(n);

    if (result == -1) {
        printf("Giai th?a không xác d?nh cho s? âm.\n");
    } else {
        printf("Giai th?a c?a %d là: %d\n", n, result);
    }

    return 0;
}


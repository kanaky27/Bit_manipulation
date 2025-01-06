#include <stdio.h>

void NonRepeatingElements(int arr[], int n) {
    int xor = 0;
    int setBit, num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        xor ^= arr[i];
    }
    setBit = xor & ~(xor - 1);
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit) {
            num1 ^= arr[i];  
        } else {
            num2 ^= arr[i];  
        }
    }
    printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {4, 5, 6, 4, 7, 5, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    NonRepeatingElements(arr, n);

    return 0;
}
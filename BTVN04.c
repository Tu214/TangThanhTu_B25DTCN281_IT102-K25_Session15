#include <stdio.h>

int sumArr(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumArr(arr, size);           
    printf("Tong cac phan tu trong mang: %d\n", result);
    return 0;
}


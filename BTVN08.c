#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    int j = 0; 
    for (int i = 0; i < size; i++) {
        
        int daTonTai = 0;
        for (int k = 0; k < j; k++) {
            if (arr[k] == arr[i]) {
                daTonTai = 1;
                break;
            }
        }
        if (daTonTai == 0) {
            arr[j] = arr[i];
            j++; 
        }
    }
    return j;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 5, 2, 5, 1, 3, 2, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau: ");
    printArray(arr, n);

    int newSize = removeDuplicates(arr, n);
    printf("Mang sau khi loai bo trung lap: ");
    printArray(arr, newSize); 

    return 0;
}

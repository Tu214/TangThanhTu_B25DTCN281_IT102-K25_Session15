#include <stdio.h>
#include <limits.h> 

int findLeastFrequent(int arr[], int size) {
    if (size <= 0) {
        return -1; 
    }

    int minCount = INT_MAX; 
    int minElement = arr[0];

    for (int i = 0; i < size; i++) {
        int currentCount = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                currentCount++;
            }
        }
        if (currentCount < minCount) {
            minCount = currentCount;
            minElement = arr[i];
        }
    }
    return minElement;
}

int main() {
    int arr1[] = {1, 5, 2, 5, 1, 3, 2, 4, 5, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {10, 20, 10, 20, 30, 10, 40};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {5, 5, 5, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    int result1 = findLeastFrequent(arr1, n1);
    printf("->mang 1 Phan tu xuat hien it nhat la: %d\n\n", result1); 

    int result2 = findLeastFrequent(arr2, n2);

    printf("->mang 2 Phan tu xuat hien it nhat la: %d\n\n", result2);

    int result3 = findLeastFrequent(arr3, n3);

    printf("->mang 3 Phan tu xuat hien it nhat la: %d\n\n", result3);

    return 0;
}



#include <stdio.h>
int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Found
        }
    }
    return -1; // Not found
}
int main() {
    int arr[] = {12, 45, 23, 67, 89, 34, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 67;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);
    return 0;
}

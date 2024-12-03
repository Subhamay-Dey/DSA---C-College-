#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the mid index

        // Check if the target is at the mid
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is smaller than mid, search in the left half
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // Otherwise, search in the right half
        else {
            left = mid + 1;
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

#include <iostream>
using namespace std;

// Class definition
class SearchArray {
private:
    int data[100]; // Array to hold data elements
    int size;      // Size of the array

public:
    // Function to set the data securely
    void setData(int arr[], int n) {
        size = n;
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
    }

    // Function to perform binary search
    int binarySearch(int item, int &minComparisons, int &maxComparisons) {
        int left = 0, right = size - 1, comparisons = 0;

        while (left <= right) {
            comparisons++; // Increment comparison count
            int mid = left + (right - left) / 2;

            if (data[mid] == item) {
                minComparisons = 1;        // Binary search always has a minimum of 1 comparison.
                maxComparisons = comparisons; // Maximum comparisons made in this search.
                return mid + 1;           // Return 1-based index of the item.
            } else if (data[mid] < item) {
                left = mid + 1;           // Move to the right half.
            } else {
                right = mid - 1;          // Move to the left half.
            }
        }

        minComparisons = 1;
        maxComparisons = comparisons;
        return -1; // Item not found
    }
};

// Main function
int main() {
    SearchArray searchObj; // Create an object of SearchArray class

    // Input sorted array
    int arr[] = {10, 19, 27, 30, 35, 67, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    searchObj.setData(arr, n);

    // Display minimum and maximum comparisons
    cout << "Minimum no. of comparison required: 1" << endl;
    cout << "Maximum no. of the comparison required: " << (int)log2(n) + 1 << endl;

    // Input the search item
    int item;
    cout << "Enter the item to search: ";
    cin >> item;

    int minComparisons, maxComparisons;
    int location = searchObj.binarySearch(item, minComparisons, maxComparisons);

    // Display the output
    if (location != -1) {
        cout << "Search Item: " << item << endl;
        cout << "Location: " << location << endl;
    } else {
        cout << "Search Item: " << item << endl;
        cout << "Location: Not found" << endl;
    }

    return 0;
}

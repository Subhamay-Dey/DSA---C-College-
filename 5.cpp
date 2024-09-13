#include<iostream>
using namespace std;

class BinarySearch {
    private:
        int arr[7];
    public:
        void getInput() {
            cout << "Enter 7 elements in sorted order: ";
            for (int i = 0; i < 7; i++) {
                cin >> arr[i];
            }
        }

        int binarySearch(int key) {
            int low = 0, high = 6, mid;
            int comparisons = 0;
            while (low <= high) {
                comparisons++;
                mid = (low + high) / 2;
                if (arr[mid] == key) {
                    cout << "Minimum number of comparisons required: " << comparisons << endl;
                    return mid + 1;
                } else if (arr[mid] < key) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return -1;
        }
};

int main() {
    BinarySearch bs;
    bs.getInput();
    int searchItem;
    cout << "Enter the element to search: ";
    cin >> searchItem;
    int location = bs.binarySearch(searchItem);
    if (location != -1)
        cout << "Location: " << location << endl;
    else
        cout << "Element not found!" << endl;
    return 0;
}

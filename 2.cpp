#include<iostream>
using namespace std;

class ArrayOperations {
    private:
        int arr[10], n, max, min;
    public:
        void getInput() {
            cout << "Enter number of elements (up to 10): ";
            cin >> n;
            cout << "Enter the elements: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }
        void findMax() {
            max = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
            }
        }
        void findMin() {
            min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < min)
                    min = arr[i];
            }
        }
        void displayResult() {
            cout << "Maximum value: " << max << endl;
            cout << "Minimum value: " << min << endl;
        }
};

int main() {
    ArrayOperations ao;
    ao.getInput();
    ao.findMax();
    ao.findMin();
    ao.displayResult();
    return 0;
}

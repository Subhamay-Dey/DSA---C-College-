#include <iostream>
using namespace std;

class DataSet {
    int arr[10];
public:
    void getData() {
        cout << "Enter 10 integer elements: ";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    int getMax() {
        int max = arr[0];
        for (int i = 1; i < 10; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }

    int getMin() {
        int min = arr[0];
        for (int i = 1; i < 10; i++) {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }

    void displayMaxMin() {
        cout << "Maximum: " << getMax() << endl;
        cout << "Minimum: " << getMin() << endl;
    }
};

int main() {
    DataSet data;
    data.getData();
    data.displayMaxMin();
    return 0;
}

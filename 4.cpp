#include<iostream>
using namespace std;

class SearchElement {
    private:
        int arr[10], n;
    public:
        void getInput() {
            cout << "Enter 10 elements: ";
            for (int i = 0; i < 10; i++) {
                cin >> arr[i];
            }
        }
        void search(int key) {
            for (int i = 0; i < 10; i++) {
                if (arr[i] == key) {
                    cout << "Search Item: " << key << "\nLocation: " << i + 1 << endl;
                    return;
                }
            }
            cout << "Element not found!" << endl;
        }
};

int main() {
    SearchElement se;
    se.getInput();
    int searchItem;
    cout << "Enter the element to search: ";
    cin >> searchItem;
    se.search(searchItem);
    return 0;
}

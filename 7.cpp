#include <iostream>
using namespace std;

class Book {
    string title;
    string ISBN;
    float price;
public:
    void getBookInfo() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter ISBN: ";
        cin >> ISBN;
        cout << "Enter price: ";
        cin >> price;
    }

    void displayBookInfo() {
        cout << "Title: " << title << ", ISBN: " << ISBN << ", Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book books[100];
    for (int i = 0; i < n; i++) {
        cout << "Enter details of book " << i + 1 << endl;
        books[i].getBookInfo();
    }

    cout << "Book Information: " << endl;
    for (int i = 0; i < n; i++) {
        books[i].displayBookInfo();
    }

    return 0;
}

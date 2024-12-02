#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string isbn;
    float price;

public:
    // Function to input book details
    void inputDetails() {
        cout << "Enter Book Title: ";
        cin.ignore(); // To ignore leftover newline character
        getline(cin, title);
        cout << "Enter ISBN: ";
        cin >> isbn;
        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void displayDetails() const {
        cout << "Title: " << title << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of books: ";
    cin >> n;

    // Create an array of Book objects
    Book* books = new Book[n];

    // Input details for each book
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Book " << i + 1 << ":\n";
        books[i].inputDetails();
    }

    // Display details of each book
    cout << "\nDisplaying Book Information:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].displayDetails();
    }

    // Free dynamically allocated memory
    delete[] books;

    return 0;
}

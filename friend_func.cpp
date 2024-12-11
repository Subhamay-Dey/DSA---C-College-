#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    friend void printWidth(const Box& b);
};

void printWidth(const Box& b) {
    cout << "Width of the box: " << b.width << endl;
}

int main() {
    Box box(10.5);

    printWidth(box);

    return 0;
}

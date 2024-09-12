#include<iostream>
using namespace std;

class Factorial {
    private:
        int n, fact;
    public:
        void getInput() {
            cout << "Enter a number: ";
            cin >> n;
        }
        void calculateFactorial() {
            fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
        }
        void displayResult() {
            cout << "Factorial of " << n << " is: " << fact << endl;
        }
};

int main() {
    Factorial f;
    f.getInput();
    f.calculateFactorial();
    f.displayResult();
    return 0;
}
